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
typedef RwResEntry*(*type_7)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
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
typedef RwResEntry*(*type_31)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
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
	RwResEntry* meshes[1];
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
	RpClump*(*callback)(RpClump*, void*);
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
	void(*destroyNotify)(RwResEntry*);
};

struct rwPS2AllResEntryHeader
{
	int32 refCnt;
	int32 clrCnt;
	<unknown fundamental type (0xa510)>* data;
	uint32 numVerts;
	uint32 objIdentifier;
	uint32 meshIdentifier;
	int32 batchSize;
	int32 numBatches;
	int32 batchesPerTag;
	int32 morphStart;
	int32 morphFinish;
	int32 morphNum;
	rwPS2AllClusterQuickInfo clquickinfo[12];
	rwPS2AllFieldRec fieldRec[12];
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
	RwTexCoords* texCoords[8];
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
	uint32 pad[4];
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
	uint16 vertIndex[3];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint8 pad[1];
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
	int8 name[32];
	int8 mask[32];
	uint32 filterAddressing;
	int32 refCount;
};

struct rxNodePS2AllMatPvtData
{
	int32(*meshInstanceTestCB)(RxPS2AllPipeData*);
	RwResEntry*(*resEntryAllocCB)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
	int32(*instanceCB)(RxPS2AllPipeData*, void**, uint32);
	int32(*bridgeCB)(RxPS2AllPipeData*);
	int32(*postMeshCB)(RxPS2AllPipeData*);
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	rwPS2AllClusterInstanceInfo clinfo[12];
	uint32 cliIndex[12];
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
	uint8 pad[2];
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	rwPS2AllFieldRec fieldRec[12];
};

struct rwPS2AllClusterQuickInfo
{
	<unknown fundamental type (0xa510)>* data;
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
	RwCamera*(*beginUpdate)(RwCamera*);
	RwCamera*(*endUpdate)(RwCamera*);
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
	RwFrustumPlane frustumPlanes[6];
	RwBBox frustumBoundBox;
	RwV3d frustumCorners[8];
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
	int32(*nodeBody)(RxPipelineNode*, RxPipelineNodeParam*);
	int32(*nodeInit)(RxNodeDefinition*);
	void(*nodeTerm)(RxNodeDefinition*);
	int32(*pipelineNodeInit)(RxPipelineNode*);
	void(*pipelineNodeTerm)(RxPipelineNode*);
	int32(*pipelineNodeConfig)(RxPipelineNode*, RxPipeline*);
	uint32(*configMsgHandler)(RxPipelineNode*, uint32, uint32, void*);
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
	RxCluster clusters[1];
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

int8 buffer[16];
int8 buffer[16];
float32 sinRangePoint5[8];
float32 xFXWarbleParam[8];
iFXgooParams gooParams;
ulong32 gs_alpha_2;
RwTexture* g_txtrGoo;
int32(*RpAtomicPS2AllObjectSetupCallBack)(RxPS2AllPipeData*, RwMatrixTag**);
int32(*iFXgooBridgeCallBack)(RxPS2AllPipeData*);
int32(*RpMeshPS2AllInstanceCallBack)(RxPS2AllPipeData*, void**, uint32);
RwResEntry*(*RpMeshPS2AllResEntryAllocCallBack)(RxPS2AllPipeData*, RwResEntry**, uint32, void(*)(RwResEntry*));
int32(*RpMeshPS2AllMeshInstanceTestCallBack)(RxPS2AllPipeData*);
long32 FXgooPRS;
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
<unknown fundamental type (0xa510)>* _rwDMAPktPtr;
void* skyUploadedCode;
long32 skyTest_1;
long32 skyClamp_1;
long32 skyTex1_1;
uint32 skyUserSwitch1;
uint32 skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown fundamental type (0xa510)> skyClipVect2;
<unknown fundamental type (0xa510)> skyClipVect1;
<unknown fundamental type (0xa510)> skyCClipVect2;
<unknown fundamental type (0xa510)> skyCClipVect1;
int32 skyTLClipperMode;
int32 skyTSClipperMode;
long32 skyPrim_State;
<unknown fundamental type (0xa510)> gifTag128;
int32 skyAlphaTex;
int32 skyVertexAlpha;
float32 xFXanimUV2PScale[2];
float32 xFXanimUV2PTrans[2];
float32 xFXanimUV2PRotMat1[2];
float32 xFXanimUV2PRotMat0[2];
float32 xFXanimUVScale[2];
float32 xFXanimUVTrans[2];
float32 xFXanimUVRotMat1[2];
float32 xFXanimUVRotMat0[2];
RwTexture* xFXanimUV2PTexture;
RwRaster* skyTextureRaster;
uint32 ourGlobals[4096];

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
	// Line 538, Address: 0x3299e0, Func Offset: 0
	// Line 545, Address: 0x3299f0, Func Offset: 0x10
	// Line 547, Address: 0x3299fc, Func Offset: 0x1c
	// Line 549, Address: 0x329a10, Func Offset: 0x30
	// Line 552, Address: 0x329a18, Func Offset: 0x38
	// Line 555, Address: 0x329a20, Func Offset: 0x40
	// Line 558, Address: 0x329a2c, Func Offset: 0x4c
	// Line 565, Address: 0x329a44, Func Offset: 0x64
	// Line 569, Address: 0x329a4c, Func Offset: 0x6c
	// Line 565, Address: 0x329a54, Func Offset: 0x74
	// Line 569, Address: 0x329a58, Func Offset: 0x78
	// Line 576, Address: 0x329a68, Func Offset: 0x88
	// Line 580, Address: 0x329a74, Func Offset: 0x94
	// Line 584, Address: 0x329a88, Func Offset: 0xa8
	// Line 585, Address: 0x329a90, Func Offset: 0xb0
	// Func End, Address: 0x329aa8, Func Offset: 0xc8
}

// iFXgooCreateMaterialPipe__Fv
// Start address: 0x329ab0
RxPipeline* iFXgooCreateMaterialPipe()
{
	RxPipeline* newPipe;
	RxPipeline* lockedPipe;
	RxNodeDefinition* ps2AllMat;
	RxPipelineNode* plNode;
	void* VUCodeArray[32];
	// Line 413, Address: 0x329ab0, Func Offset: 0
	// Line 425, Address: 0x329ac0, Func Offset: 0x10
	// Line 427, Address: 0x329ac8, Func Offset: 0x18
	// Line 428, Address: 0x329ad0, Func Offset: 0x20
	// Line 430, Address: 0x329ad8, Func Offset: 0x28
	// Line 432, Address: 0x329ae4, Func Offset: 0x34
	// Line 433, Address: 0x329aec, Func Offset: 0x3c
	// Line 435, Address: 0x329af8, Func Offset: 0x48
	// Line 439, Address: 0x329b04, Func Offset: 0x54
	// Line 445, Address: 0x329b18, Func Offset: 0x68
	// Line 439, Address: 0x329b1c, Func Offset: 0x6c
	// Line 445, Address: 0x329b20, Func Offset: 0x70
	// Line 452, Address: 0x329b34, Func Offset: 0x84
	// Line 456, Address: 0x329b48, Func Offset: 0x98
	// Line 460, Address: 0x329b5c, Func Offset: 0xac
	// Line 464, Address: 0x329b70, Func Offset: 0xc0
	// Line 469, Address: 0x329b84, Func Offset: 0xd4
	// Line 475, Address: 0x329b98, Func Offset: 0xe8
	// Line 479, Address: 0x329ba0, Func Offset: 0xf0
	// Line 475, Address: 0x329ba8, Func Offset: 0xf8
	// Line 479, Address: 0x329bac, Func Offset: 0xfc
	// Line 486, Address: 0x329bbc, Func Offset: 0x10c
	// Line 491, Address: 0x329bc8, Func Offset: 0x118
	// Line 512, Address: 0x329bcc, Func Offset: 0x11c
	// Line 491, Address: 0x329bd0, Func Offset: 0x120
	// Line 512, Address: 0x329bdc, Func Offset: 0x12c
	// Line 492, Address: 0x329be0, Func Offset: 0x130
	// Line 512, Address: 0x329be4, Func Offset: 0x134
	// Line 492, Address: 0x329be8, Func Offset: 0x138
	// Line 512, Address: 0x329bec, Func Offset: 0x13c
	// Line 493, Address: 0x329bf0, Func Offset: 0x140
	// Line 494, Address: 0x329bf8, Func Offset: 0x148
	// Line 495, Address: 0x329c00, Func Offset: 0x150
	// Line 496, Address: 0x329c08, Func Offset: 0x158
	// Line 497, Address: 0x329c10, Func Offset: 0x160
	// Line 498, Address: 0x329c18, Func Offset: 0x168
	// Line 512, Address: 0x329c1c, Func Offset: 0x16c
	// Line 515, Address: 0x329c24, Func Offset: 0x174
	// Line 518, Address: 0x329c38, Func Offset: 0x188
	// Line 521, Address: 0x329c4c, Func Offset: 0x19c
	// Line 524, Address: 0x329c60, Func Offset: 0x1b0
	// Line 533, Address: 0x329c74, Func Offset: 0x1c4
	// Line 534, Address: 0x329c78, Func Offset: 0x1c8
	// Func End, Address: 0x329c90, Func Offset: 0x1e0
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
	<unknown fundamental type (0xa510)> ltmp;
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
	<unknown fundamental type (0xa510)> ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)>* _rwDMA_local_rwDMAPktPtr;
	<unknown fundamental type (0xa510)> ___ltmp;
	iFXgooParams* goo;
	float32 A;
	float32 B;
	float32 saved_min;
	float32 saved_max;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __prmTmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	float32 __colScale;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown fundamental type (0xa510)> __ltmp;
	ulong32 __tmp1;
	uint32 __skySwitchFlag;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown fundamental type (0xa510)> __ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	void* _kohd;
	ulong32 tmp;
	<unknown fundamental type (0xa510)> ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	ulong32 __tmp;
	ulong32 __tmp1;
	<unknown fundamental type (0xa510)> __ltmp;
	<unknown fundamental type (0xa510)> ___ltmp;
	uint32 stat;
	// Line 169, Address: 0x329c90, Func Offset: 0
	// Line 178, Address: 0x329ca8, Func Offset: 0x18
	// Line 181, Address: 0x329cb0, Func Offset: 0x20
	// Line 182, Address: 0x329cbc, Func Offset: 0x2c
	// Line 186, Address: 0x329cc0, Func Offset: 0x30
	// Line 187, Address: 0x329cc8, Func Offset: 0x38
	// Line 188, Address: 0x329cd4, Func Offset: 0x44
	// Line 189, Address: 0x329ce0, Func Offset: 0x50
	// Line 193, Address: 0x329ce8, Func Offset: 0x58
	// Line 195, Address: 0x329cfc, Func Offset: 0x6c
	// Line 211, Address: 0x329e18, Func Offset: 0x188
	// Line 214, Address: 0x329e1c, Func Offset: 0x18c
	// Line 220, Address: 0x329e20, Func Offset: 0x190
	// Line 221, Address: 0x329e24, Func Offset: 0x194
	// Line 224, Address: 0x329e64, Func Offset: 0x1d4
	// Line 228, Address: 0x329e68, Func Offset: 0x1d8
	// Line 224, Address: 0x329e70, Func Offset: 0x1e0
	// Line 228, Address: 0x329e74, Func Offset: 0x1e4
	// Line 239, Address: 0x329e78, Func Offset: 0x1e8
	// Line 228, Address: 0x329e7c, Func Offset: 0x1ec
	// Line 227, Address: 0x329e88, Func Offset: 0x1f8
	// Line 231, Address: 0x329e8c, Func Offset: 0x1fc
	// Line 239, Address: 0x329e90, Func Offset: 0x200
	// Line 240, Address: 0x329e94, Func Offset: 0x204
	// Line 232, Address: 0x329e98, Func Offset: 0x208
	// Line 240, Address: 0x329e9c, Func Offset: 0x20c
	// Line 379, Address: 0x329ea4, Func Offset: 0x214
	// Line 241, Address: 0x329ea8, Func Offset: 0x218
	// Line 379, Address: 0x329eac, Func Offset: 0x21c
	// Line 241, Address: 0x329eb0, Func Offset: 0x220
	// Line 379, Address: 0x329eb4, Func Offset: 0x224
	// Line 354, Address: 0x329eb8, Func Offset: 0x228
	// Line 379, Address: 0x329ebc, Func Offset: 0x22c
	// Line 240, Address: 0x329ec0, Func Offset: 0x230
	// Line 379, Address: 0x329ec4, Func Offset: 0x234
	// Line 240, Address: 0x329ec8, Func Offset: 0x238
	// Line 275, Address: 0x329ecc, Func Offset: 0x23c
	// Line 241, Address: 0x329ed0, Func Offset: 0x240
	// Line 275, Address: 0x329ed4, Func Offset: 0x244
	// Line 321, Address: 0x329ed8, Func Offset: 0x248
	// Line 354, Address: 0x329edc, Func Offset: 0x24c
	// Line 321, Address: 0x329ee0, Func Offset: 0x250
	// Line 370, Address: 0x329ee4, Func Offset: 0x254
	// Line 246, Address: 0x329ee8, Func Offset: 0x258
	// Line 232, Address: 0x329eec, Func Offset: 0x25c
	// Line 379, Address: 0x329ef0, Func Offset: 0x260
	// Line 240, Address: 0x329ef4, Func Offset: 0x264
	// Line 279, Address: 0x329ef8, Func Offset: 0x268
	// Line 324, Address: 0x329efc, Func Offset: 0x26c
	// Line 325, Address: 0x329f00, Func Offset: 0x270
	// Line 354, Address: 0x329f04, Func Offset: 0x274
	// Line 362, Address: 0x329f08, Func Offset: 0x278
	// Line 367, Address: 0x329f10, Func Offset: 0x280
	// Line 370, Address: 0x329f14, Func Offset: 0x284
	// Line 240, Address: 0x329f1c, Func Offset: 0x28c
	// Line 241, Address: 0x329f20, Func Offset: 0x290
	// Line 240, Address: 0x329f24, Func Offset: 0x294
	// Line 241, Address: 0x329f28, Func Offset: 0x298
	// Line 244, Address: 0x329f2c, Func Offset: 0x29c
	// Line 245, Address: 0x329f30, Func Offset: 0x2a0
	// Line 246, Address: 0x329f34, Func Offset: 0x2a4
	// Line 321, Address: 0x329f38, Func Offset: 0x2a8
	// Line 349, Address: 0x329f3c, Func Offset: 0x2ac
	// Line 247, Address: 0x329f44, Func Offset: 0x2b4
	// Line 248, Address: 0x329f48, Func Offset: 0x2b8
	// Line 247, Address: 0x329f50, Func Offset: 0x2c0
	// Line 249, Address: 0x329f54, Func Offset: 0x2c4
	// Line 328, Address: 0x329f58, Func Offset: 0x2c8
	// Line 250, Address: 0x329f5c, Func Offset: 0x2cc
	// Line 249, Address: 0x329f60, Func Offset: 0x2d0
	// Line 251, Address: 0x329f64, Func Offset: 0x2d4
	// Line 262, Address: 0x329f68, Func Offset: 0x2d8
	// Line 260, Address: 0x329f6c, Func Offset: 0x2dc
	// Line 280, Address: 0x329f70, Func Offset: 0x2e0
	// Line 262, Address: 0x329f74, Func Offset: 0x2e4
	// Line 266, Address: 0x329f78, Func Offset: 0x2e8
	// Line 275, Address: 0x329f94, Func Offset: 0x304
	// Line 280, Address: 0x329fa8, Func Offset: 0x318
	// Line 281, Address: 0x329fac, Func Offset: 0x31c
	// Line 282, Address: 0x329fb0, Func Offset: 0x320
	// Line 288, Address: 0x329fb4, Func Offset: 0x324
	// Line 282, Address: 0x329fb8, Func Offset: 0x328
	// Line 289, Address: 0x329fbc, Func Offset: 0x32c
	// Line 290, Address: 0x329fc0, Func Offset: 0x330
	// Line 291, Address: 0x329fc4, Func Offset: 0x334
	// Line 294, Address: 0x329fc8, Func Offset: 0x338
	// Line 291, Address: 0x329fcc, Func Offset: 0x33c
	// Line 296, Address: 0x329fd0, Func Offset: 0x340
	// Line 297, Address: 0x329fd4, Func Offset: 0x344
	// Line 298, Address: 0x329fd8, Func Offset: 0x348
	// Line 303, Address: 0x329fdc, Func Offset: 0x34c
	// Line 298, Address: 0x329fe0, Func Offset: 0x350
	// Line 304, Address: 0x329fe4, Func Offset: 0x354
	// Line 305, Address: 0x329fe8, Func Offset: 0x358
	// Line 306, Address: 0x329fec, Func Offset: 0x35c
	// Line 309, Address: 0x329ff0, Func Offset: 0x360
	// Line 306, Address: 0x329ff4, Func Offset: 0x364
	// Line 311, Address: 0x329ff8, Func Offset: 0x368
	// Line 312, Address: 0x329ffc, Func Offset: 0x36c
	// Line 313, Address: 0x32a000, Func Offset: 0x370
	// Line 349, Address: 0x32a004, Func Offset: 0x374
	// Line 320, Address: 0x32a008, Func Offset: 0x378
	// Line 313, Address: 0x32a00c, Func Offset: 0x37c
	// Line 328, Address: 0x32a010, Func Offset: 0x380
	// Line 348, Address: 0x32a014, Func Offset: 0x384
	// Line 320, Address: 0x32a018, Func Offset: 0x388
	// Line 321, Address: 0x32a024, Func Offset: 0x394
	// Line 322, Address: 0x32a038, Func Offset: 0x3a8
	// Line 323, Address: 0x32a048, Func Offset: 0x3b8
	// Line 324, Address: 0x32a04c, Func Offset: 0x3bc
	// Line 323, Address: 0x32a050, Func Offset: 0x3c0
	// Line 324, Address: 0x32a054, Func Offset: 0x3c4
	// Line 323, Address: 0x32a058, Func Offset: 0x3c8
	// Line 325, Address: 0x32a05c, Func Offset: 0x3cc
	// Line 323, Address: 0x32a064, Func Offset: 0x3d4
	// Line 326, Address: 0x32a06c, Func Offset: 0x3dc
	// Line 329, Address: 0x32a078, Func Offset: 0x3e8
	// Line 330, Address: 0x32a07c, Func Offset: 0x3ec
	// Line 329, Address: 0x32a084, Func Offset: 0x3f4
	// Line 331, Address: 0x32a088, Func Offset: 0x3f8
	// Line 332, Address: 0x32a08c, Func Offset: 0x3fc
	// Line 331, Address: 0x32a094, Func Offset: 0x404
	// Line 333, Address: 0x32a098, Func Offset: 0x408
	// Line 334, Address: 0x32a09c, Func Offset: 0x40c
	// Line 333, Address: 0x32a0a4, Func Offset: 0x414
	// Line 335, Address: 0x32a0a8, Func Offset: 0x418
	// Line 350, Address: 0x32a0ac, Func Offset: 0x41c
	// Line 335, Address: 0x32a0b0, Func Offset: 0x420
	// Line 354, Address: 0x32a0b4, Func Offset: 0x424
	// Line 351, Address: 0x32a0b8, Func Offset: 0x428
	// Line 359, Address: 0x32a0bc, Func Offset: 0x42c
	// Line 351, Address: 0x32a0c0, Func Offset: 0x430
	// Line 360, Address: 0x32a0c4, Func Offset: 0x434
	// Line 361, Address: 0x32a0c8, Func Offset: 0x438
	// Line 362, Address: 0x32a0cc, Func Offset: 0x43c
	// Line 361, Address: 0x32a0d0, Func Offset: 0x440
	// Line 363, Address: 0x32a0d4, Func Offset: 0x444
	// Line 367, Address: 0x32a0d8, Func Offset: 0x448
	// Line 363, Address: 0x32a0dc, Func Offset: 0x44c
	// Line 367, Address: 0x32a0e0, Func Offset: 0x450
	// Line 368, Address: 0x32a0e4, Func Offset: 0x454
	// Line 370, Address: 0x32a0e8, Func Offset: 0x458
	// Line 368, Address: 0x32a0ec, Func Offset: 0x45c
	// Line 371, Address: 0x32a0f0, Func Offset: 0x460
	// Line 373, Address: 0x32a0f8, Func Offset: 0x468
	// Line 379, Address: 0x32a0fc, Func Offset: 0x46c
	// Line 384, Address: 0x32a1a0, Func Offset: 0x510
	// Line 379, Address: 0x32a1a4, Func Offset: 0x514
	// Line 384, Address: 0x32a1a8, Func Offset: 0x518
	// Line 379, Address: 0x32a1ac, Func Offset: 0x51c
	// Line 384, Address: 0x32a1bc, Func Offset: 0x52c
	// Line 379, Address: 0x32a1c4, Func Offset: 0x534
	// Line 384, Address: 0x32a1d0, Func Offset: 0x540
	// Line 379, Address: 0x32a1d4, Func Offset: 0x544
	// Line 384, Address: 0x32a1d8, Func Offset: 0x548
	// Line 379, Address: 0x32a1dc, Func Offset: 0x54c
	// Line 384, Address: 0x32a1e0, Func Offset: 0x550
	// Line 379, Address: 0x32a1e8, Func Offset: 0x558
	// Line 384, Address: 0x32a1f0, Func Offset: 0x560
	// Line 387, Address: 0x32a240, Func Offset: 0x5b0
	// Line 390, Address: 0x32a280, Func Offset: 0x5f0
	// Line 396, Address: 0x32a3a8, Func Offset: 0x718
	// Line 399, Address: 0x32a50c, Func Offset: 0x87c
	// Line 401, Address: 0x32a52c, Func Offset: 0x89c
	// Line 404, Address: 0x32a580, Func Offset: 0x8f0
	// Line 407, Address: 0x32a628, Func Offset: 0x998
	// Line 406, Address: 0x32a630, Func Offset: 0x9a0
	// Line 407, Address: 0x32a634, Func Offset: 0x9a4
	// Func End, Address: 0x32a644, Func Offset: 0x9b4
}

// iFXGooSceneExit__Fv
// Start address: 0x32a650
void iFXGooSceneExit()
{
	// Line 167, Address: 0x32a650, Func Offset: 0
	// Func End, Address: 0x32a658, Func Offset: 0x8
}

// iFXGooSceneSetup__Fv
// Start address: 0x32a660
void iFXGooSceneSetup()
{
	// Line 154, Address: 0x32a660, Func Offset: 0
	// Line 156, Address: 0x32a664, Func Offset: 0x4
	// Line 154, Address: 0x32a668, Func Offset: 0x8
	// Line 156, Address: 0x32a66c, Func Offset: 0xc
	// Line 160, Address: 0x32a67c, Func Offset: 0x1c
	// Func End, Address: 0x32a688, Func Offset: 0x28
}

// iFXgooSetParams__FP5xVec3UiffffPf
// Start address: 0x32a690
void iFXgooSetParams(xVec3* center, uint32 state, float32 warb_time, float32 alpha, float32 min, float32 max, float32* warbc)
{
	// Line 81, Address: 0x32a690, Func Offset: 0
	// Line 82, Address: 0x32a6b4, Func Offset: 0x24
	// Line 83, Address: 0x32a6bc, Func Offset: 0x2c
	// Line 84, Address: 0x32a6c4, Func Offset: 0x34
	// Line 85, Address: 0x32a6cc, Func Offset: 0x3c
	// Line 86, Address: 0x32a6d4, Func Offset: 0x44
	// Line 87, Address: 0x32a6dc, Func Offset: 0x4c
	// Line 88, Address: 0x32a6e0, Func Offset: 0x50
	// Func End, Address: 0x32a6e8, Func Offset: 0x58
}

