typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RpGeometry;
typedef struct RxPipelineNode;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RpMeshHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct RxPipeline;
typedef struct xMorphTargetFile;
typedef struct RpTriangle;
typedef struct RpAtomic;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct xMorphSeqFile;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct RpClump;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct RpMaterial;
typedef enum rxEmbeddedPacketState;
typedef struct RwTexture;
typedef enum RxClusterForcePresent;
typedef struct RxClusterDefinition;
typedef struct RpMorphTarget;
typedef struct xMorphFrame;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RpInterpolator;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RpMaterialList;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;

typedef uint32(*type_3)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(RxNodeDefinition*);
typedef void*(*type_8)(uint32, int8*);
typedef int32(*type_9)(RxPipelineNode*);
typedef void(*type_10)(RxPipelineNode*);
typedef int32(*type_12)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_13)(RpAtomic*);
typedef void*(*type_17)(uint32, int8*);
typedef void(*type_20)(RwResEntry*);
typedef RwObjectHasFrame*(*type_22)(RwObjectHasFrame*);

typedef int16* type_0[4];
typedef int16 type_1[4];
typedef int16 type_2[4];
typedef uint16 type_11[3];
typedef RwTexCoords* type_14[8];
typedef uint32 type_15[4];
typedef int16 type_16[4];
typedef int8 type_18[32];
typedef int8 type_19[32];
typedef RxCluster type_21[1];

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

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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
	type_14 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_15 pad;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xMorphTargetFile
{
	uint32 Magic;
	uint16 NumTargets;
	uint16 NumVerts;
	uint32 Flags;
	float32 Scale;
	xVec3 Center;
	float32 Radius;
};

struct RpTriangle
{
	type_11 vertIndex;
	int16 matIndex;
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
	type_13 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xMorphSeqFile
{
	uint32 Magic;
	uint32 Flags;
	uint32 TimeCount;
	uint32 ModelCount;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_20 destroyNotify;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_5 callback;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_18 name;
	type_19 mask;
	uint32 filterAddressing;
	int32 refCount;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xMorphFrame
{
	RpAtomic* Model;
	float32 RecipTime;
	float32 Scale;
	uint16 Flags;
	uint16 NumVerts;
	type_0 Targets;
	type_1 WeightStart;
	type_2 WeightEnd;
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
	type_4 nodeBody;
	type_6 nodeInit;
	type_7 nodeTerm;
	type_9 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_12 pipelineNodeConfig;
	type_3 configMsgHandler;
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
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

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_21 clusters;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_22 sync;
};

struct RwLinkList
{
	RwLLLink link;
};


float32 xMorphSeqDuration(xMorphSeqFile* seq);
void xMorphRender(xMorphSeqFile* seq, RwMatrixTag* mat, float32 time);
xMorphSeqFile* xMorphSeqSetup(void* data, type_8 FindAssetCB);

// xMorphSeqDuration__FP13xMorphSeqFile
// Start address: 0x1f2400
float32 xMorphSeqDuration(xMorphSeqFile* seq)
{
}

// xMorphRender__FP13xMorphSeqFileP11RwMatrixTagf
// Start address: 0x1f2420
void xMorphRender(xMorphSeqFile* seq, RwMatrixTag* mat, float32 time)
{
	float32 lerp;
	uint32 tidx;
	type_16 weight;
	int16* wptr;
	float32* times;
	xMorphFrame* frame;
}

// xMorphSeqSetup__FPvPFUiPc_Pv
// Start address: 0x1f2620
xMorphSeqFile* xMorphSeqSetup(void* data, type_8 FindAssetCB)
{
	int32 i;
	int32 j;
	xMorphTargetFile* mphtgt;
	xMorphSeqFile* header;
	xMorphFrame* framelist;
	uint32* assetlist;
	int8* namelist;
	void* assetPtr;
	uint32 skipsize;
}

