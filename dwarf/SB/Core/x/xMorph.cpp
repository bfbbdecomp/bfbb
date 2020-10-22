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
	RwTexCoords* texCoords[8];
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
	uint32 pad[4];
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
	uint16 vertIndex[3];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	void(*destroyNotify)(RwResEntry*);
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
	RpClump*(*callback)(RpClump*, void*);
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
	int8 name[32];
	int8 mask[32];
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
	int16* Targets[4];
	int16 WeightStart[4];
	int16 WeightEnd[4];
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
	RxCluster clusters[1];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
};

struct RwLinkList
{
	RwLLLink link;
};


float32 xMorphSeqDuration(xMorphSeqFile* seq);
void xMorphRender(xMorphSeqFile* seq, RwMatrixTag* mat, float32 time);
xMorphSeqFile* xMorphSeqSetup(void* data, void*(*FindAssetCB)(uint32, int8*));

// xMorphSeqDuration__FP13xMorphSeqFile
// Start address: 0x1f2400
float32 xMorphSeqDuration(xMorphSeqFile* seq)
{
	// Line 179, Address: 0x1f2400, Func Offset: 0
	// Line 180, Address: 0x1f240c, Func Offset: 0xc
	// Func End, Address: 0x1f2414, Func Offset: 0x14
}

// xMorphRender__FP13xMorphSeqFileP11RwMatrixTagf
// Start address: 0x1f2420
void xMorphRender(xMorphSeqFile* seq, RwMatrixTag* mat, float32 time)
{
	float32 lerp;
	uint32 tidx;
	int16 weight[4];
	int16* wptr;
	float32* times;
	xMorphFrame* frame;
	// Line 125, Address: 0x1f2420, Func Offset: 0
	// Line 131, Address: 0x1f2424, Func Offset: 0x4
	// Line 125, Address: 0x1f2428, Func Offset: 0x8
	// Line 136, Address: 0x1f242c, Func Offset: 0xc
	// Line 125, Address: 0x1f2430, Func Offset: 0x10
	// Line 136, Address: 0x1f2434, Func Offset: 0x14
	// Line 137, Address: 0x1f2450, Func Offset: 0x30
	// Line 146, Address: 0x1f2460, Func Offset: 0x40
	// Line 147, Address: 0x1f2470, Func Offset: 0x50
	// Line 148, Address: 0x1f2484, Func Offset: 0x64
	// Line 150, Address: 0x1f249c, Func Offset: 0x7c
	// Line 151, Address: 0x1f24ac, Func Offset: 0x8c
	// Line 153, Address: 0x1f24d0, Func Offset: 0xb0
	// Line 156, Address: 0x1f24e0, Func Offset: 0xc0
	// Line 157, Address: 0x1f24ec, Func Offset: 0xcc
	// Line 158, Address: 0x1f24f4, Func Offset: 0xd4
	// Line 159, Address: 0x1f24fc, Func Offset: 0xdc
	// Line 162, Address: 0x1f2500, Func Offset: 0xe0
	// Line 164, Address: 0x1f2510, Func Offset: 0xf0
	// Line 162, Address: 0x1f2514, Func Offset: 0xf4
	// Line 164, Address: 0x1f251c, Func Offset: 0xfc
	// Line 166, Address: 0x1f2528, Func Offset: 0x108
	// Line 167, Address: 0x1f2530, Func Offset: 0x110
	// Line 168, Address: 0x1f2534, Func Offset: 0x114
	// Line 167, Address: 0x1f2538, Func Offset: 0x118
	// Line 168, Address: 0x1f253c, Func Offset: 0x11c
	// Line 172, Address: 0x1f25f4, Func Offset: 0x1d4
	// Line 174, Address: 0x1f25f8, Func Offset: 0x1d8
	// Line 175, Address: 0x1f2610, Func Offset: 0x1f0
	// Func End, Address: 0x1f261c, Func Offset: 0x1fc
}

// xMorphSeqSetup__FPvPFUiPc_Pv
// Start address: 0x1f2620
xMorphSeqFile* xMorphSeqSetup(void* data, void*(*FindAssetCB)(uint32, int8*))
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
	// Line 45, Address: 0x1f2620, Func Offset: 0
	// Line 60, Address: 0x1f2624, Func Offset: 0x4
	// Line 45, Address: 0x1f2628, Func Offset: 0x8
	// Line 53, Address: 0x1f2648, Func Offset: 0x28
	// Line 45, Address: 0x1f264c, Func Offset: 0x2c
	// Line 53, Address: 0x1f2650, Func Offset: 0x30
	// Line 57, Address: 0x1f2654, Func Offset: 0x34
	// Line 60, Address: 0x1f2658, Func Offset: 0x38
	// Line 55, Address: 0x1f265c, Func Offset: 0x3c
	// Line 56, Address: 0x1f2660, Func Offset: 0x40
	// Line 55, Address: 0x1f2664, Func Offset: 0x44
	// Line 57, Address: 0x1f2668, Func Offset: 0x48
	// Line 56, Address: 0x1f266c, Func Offset: 0x4c
	// Line 55, Address: 0x1f2670, Func Offset: 0x50
	// Line 56, Address: 0x1f2674, Func Offset: 0x54
	// Line 57, Address: 0x1f267c, Func Offset: 0x5c
	// Line 60, Address: 0x1f2680, Func Offset: 0x60
	// Line 61, Address: 0x1f268c, Func Offset: 0x6c
	// Line 62, Address: 0x1f2694, Func Offset: 0x74
	// Line 63, Address: 0x1f2698, Func Offset: 0x78
	// Line 66, Address: 0x1f26a0, Func Offset: 0x80
	// Line 67, Address: 0x1f26b0, Func Offset: 0x90
	// Line 68, Address: 0x1f26b4, Func Offset: 0x94
	// Line 71, Address: 0x1f26b8, Func Offset: 0x98
	// Line 73, Address: 0x1f26d4, Func Offset: 0xb4
	// Line 74, Address: 0x1f26dc, Func Offset: 0xbc
	// Line 76, Address: 0x1f26e4, Func Offset: 0xc4
	// Line 78, Address: 0x1f26e8, Func Offset: 0xc8
	// Line 79, Address: 0x1f2700, Func Offset: 0xe0
	// Line 83, Address: 0x1f2718, Func Offset: 0xf8
	// Line 84, Address: 0x1f272c, Func Offset: 0x10c
	// Line 87, Address: 0x1f2734, Func Offset: 0x114
	// Line 89, Address: 0x1f2744, Func Offset: 0x124
	// Line 93, Address: 0x1f2760, Func Offset: 0x140
	// Line 106, Address: 0x1f2770, Func Offset: 0x150
	// Line 101, Address: 0x1f2774, Func Offset: 0x154
	// Line 93, Address: 0x1f2778, Func Offset: 0x158
	// Line 100, Address: 0x1f277c, Func Offset: 0x15c
	// Line 93, Address: 0x1f2788, Func Offset: 0x168
	// Line 96, Address: 0x1f278c, Func Offset: 0x16c
	// Line 98, Address: 0x1f2790, Func Offset: 0x170
	// Line 101, Address: 0x1f2798, Func Offset: 0x178
	// Line 103, Address: 0x1f27a4, Func Offset: 0x184
	// Line 106, Address: 0x1f27b0, Func Offset: 0x190
	// Line 107, Address: 0x1f27c4, Func Offset: 0x1a4
	// Line 108, Address: 0x1f27d0, Func Offset: 0x1b0
	// Line 110, Address: 0x1f27d8, Func Offset: 0x1b8
	// Line 111, Address: 0x1f27e0, Func Offset: 0x1c0
	// Line 112, Address: 0x1f27e4, Func Offset: 0x1c4
	// Line 113, Address: 0x1f27ec, Func Offset: 0x1cc
	// Line 114, Address: 0x1f27fc, Func Offset: 0x1dc
	// Line 116, Address: 0x1f2800, Func Offset: 0x1e0
	// Line 118, Address: 0x1f2818, Func Offset: 0x1f8
	// Line 119, Address: 0x1f2828, Func Offset: 0x208
	// Line 121, Address: 0x1f2840, Func Offset: 0x220
	// Line 122, Address: 0x1f2848, Func Offset: 0x228
	// Func End, Address: 0x1f2870, Func Offset: 0x250
}

