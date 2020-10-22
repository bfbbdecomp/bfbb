typedef enum RpWorldRenderOrder;
typedef struct RwObjectHasFrame;
typedef struct RpMaterial;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwTexture;
typedef struct RxNodeDefinition;
typedef struct RpSector;
typedef struct xLightKit;
typedef struct RwFrame;
typedef struct RxPipeline;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipelineCluster;
typedef struct RxPipelineNodeParam;
typedef struct RpWorldSector;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpLight;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef struct RpWorld;
typedef struct RxPipelineRequiresCluster;
typedef struct xLightKitLight;
typedef struct RwSurfaceProperties;
typedef struct RwLLLink;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpVertexNormal;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef enum rxEmbeddedPacketState;
typedef struct RpPolygon;
typedef enum RxClusterForcePresent;
typedef struct RpMaterialList;
typedef struct RxClusterDefinition;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct RxNodeMethods;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef void(*type_1)(RxPipelineNode*);
typedef int32(*type_2)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_3)(RpWorldSector*);
typedef uint32(*type_4)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_5)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(RxNodeDefinition*);
typedef int32(*type_8)(RxPipelineNode*);
typedef void(*type_18)(RwResEntry*);

typedef float32 type_9[16];
typedef float32 type_10[3];
typedef int8 type_11[1024];
typedef uint16 type_12[3];
typedef uint32 type_13[4];
typedef uint32 type_14[4096];
typedef RwTexCoords* type_15[8];
typedef int8 type_16[32];
typedef int8 type_17[32];
typedef RxCluster type_19[1];

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
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

struct RxNodeDefinition
{
	int8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	uint32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int32 InputPipesCnt;
};

struct RpSector
{
	int32 type;
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct RwFrame
{
	RwObject object;
	RwLLLink inDirtyListLink;
	RwMatrixTag modelling;
	RwMatrixTag ltm;
	RwLinkList objectList;
	RwFrame* child;
	RwFrame* next;
	RwFrame* root;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpWorldSector
{
	int32 type;
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
	uint16 matListWindowBase;
	uint16 numVertices;
	uint16 numPolygons;
	uint16 pad;
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

struct RpLight
{
	RwObjectHasFrame object;
	float32 radius;
	RwRGBAReal color;
	float32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	uint16 lightFrame;
	uint16 pad;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct RpWorld
{
	RwObject object;
	uint32 flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	int32 numTexCoordSets;
	int32 numClumpsInWorld;
	RwLLLink* currentClumpLink;
	RwLinkList clumpList;
	RwLinkList lightList;
	RwLinkList directionalLightList;
	RwV3d worldOrigin;
	RwBBox boundingBox;
	RpWorldSector*(*renderCallBack)(RpWorldSector*);
	RxPipeline* pipeline;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	float32 matrix[16];
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpVertexNormal
{
	int8 x;
	int8 y;
	int8 z;
	uint8 pad;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	uint16 matIndex;
	uint16 vertIndex[3];
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
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

struct RxIoSpec
{
	uint32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	uint32 numOutputs;
	RxOutputSpec* outputs;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

int32 iModelHack_DisablePrelight;
xLightKit* gLastLightKit;
uint32 ourGlobals[4096];

void xLightKit_Destroy(xLightKit* lkit);
xLightKit* xLightKit_GetCurrent();
void xLightKit_Enable(xLightKit* lkit, RpWorld* world);
xLightKit* xLightKit_Prepare(void* data);

// xLightKit_Destroy__FP9xLightKit
// Start address: 0x305b10
void xLightKit_Destroy(xLightKit* lkit)
{
	uint32 i;
	xLightKitLight* currLight;
	RwFrame* tframe;
	// Line 372, Address: 0x305b10, Func Offset: 0
	// Line 374, Address: 0x305b28, Func Offset: 0x18
	// Line 380, Address: 0x305b30, Func Offset: 0x20
	// Line 378, Address: 0x305b34, Func Offset: 0x24
	// Line 380, Address: 0x305b38, Func Offset: 0x28
	// Line 381, Address: 0x305b48, Func Offset: 0x38
	// Line 384, Address: 0x305b54, Func Offset: 0x44
	// Line 385, Address: 0x305b60, Func Offset: 0x50
	// Line 387, Address: 0x305b64, Func Offset: 0x54
	// Line 388, Address: 0x305b6c, Func Offset: 0x5c
	// Line 389, Address: 0x305b74, Func Offset: 0x64
	// Line 390, Address: 0x305b7c, Func Offset: 0x6c
	// Line 391, Address: 0x305b80, Func Offset: 0x70
	// Line 392, Address: 0x305b88, Func Offset: 0x78
	// Line 393, Address: 0x305b8c, Func Offset: 0x7c
	// Line 395, Address: 0x305b90, Func Offset: 0x80
	// Line 396, Address: 0x305ba8, Func Offset: 0x98
	// Func End, Address: 0x305bc4, Func Offset: 0xb4
}

// xLightKit_GetCurrent__FP7RpWorld
// Start address: 0x305bd0
xLightKit* xLightKit_GetCurrent()
{
	// Line 368, Address: 0x305bd0, Func Offset: 0
	// Func End, Address: 0x305bd8, Func Offset: 0x8
}

// xLightKit_Enable__FP9xLightKitP7RpWorld
// Start address: 0x305be0
void xLightKit_Enable(xLightKit* lkit, RpWorld* world)
{
	uint32 i;
	// Line 334, Address: 0x305be0, Func Offset: 0
	// Line 336, Address: 0x305c00, Func Offset: 0x20
	// Line 339, Address: 0x305c08, Func Offset: 0x28
	// Line 340, Address: 0x305c10, Func Offset: 0x30
	// Line 341, Address: 0x305c28, Func Offset: 0x48
	// Line 342, Address: 0x305c3c, Func Offset: 0x5c
	// Line 343, Address: 0x305c54, Func Offset: 0x74
	// Line 349, Address: 0x305c58, Func Offset: 0x78
	// Line 350, Address: 0x305c60, Func Offset: 0x80
	// Line 351, Address: 0x305c68, Func Offset: 0x88
	// Line 352, Address: 0x305c80, Func Offset: 0xa0
	// Line 353, Address: 0x305c94, Func Offset: 0xb4
	// Line 354, Address: 0x305ca8, Func Offset: 0xc8
	// Line 355, Address: 0x305cb0, Func Offset: 0xd0
	// Line 356, Address: 0x305cb4, Func Offset: 0xd4
	// Line 360, Address: 0x305cb8, Func Offset: 0xd8
	// Line 363, Address: 0x305cc0, Func Offset: 0xe0
	// Func End, Address: 0x305cdc, Func Offset: 0xfc
}

// xLightKit_Prepare__FPv
// Start address: 0x305ce0
xLightKit* xLightKit_Prepare(void* data)
{
	xLightKit* lkit;
	xLightKitLight* currlight;
	uint32 i;
	float32 s;
	RwFrame* frame;
	RwMatrixTag tmpmat;
	// Line 204, Address: 0x305ce0, Func Offset: 0
	// Line 206, Address: 0x305cfc, Func Offset: 0x1c
	// Line 204, Address: 0x305d00, Func Offset: 0x20
	// Line 209, Address: 0x305d04, Func Offset: 0x24
	// Line 204, Address: 0x305d08, Func Offset: 0x28
	// Line 209, Address: 0x305d14, Func Offset: 0x34
	// Line 212, Address: 0x305d18, Func Offset: 0x38
	// Line 240, Address: 0x305d40, Func Offset: 0x60
	// Line 242, Address: 0x305d54, Func Offset: 0x74
	// Line 243, Address: 0x305d5c, Func Offset: 0x7c
	// Line 249, Address: 0x305d60, Func Offset: 0x80
	// Line 242, Address: 0x305d64, Func Offset: 0x84
	// Line 249, Address: 0x305d68, Func Offset: 0x88
	// Line 256, Address: 0x305da4, Func Offset: 0xc4
	// Line 258, Address: 0x305de8, Func Offset: 0x108
	// Line 259, Address: 0x305e18, Func Offset: 0x138
	// Line 258, Address: 0x305e1c, Func Offset: 0x13c
	// Line 259, Address: 0x305e20, Func Offset: 0x140
	// Line 260, Address: 0x305e28, Func Offset: 0x148
	// Line 261, Address: 0x305e34, Func Offset: 0x154
	// Line 266, Address: 0x305e40, Func Offset: 0x160
	// Line 268, Address: 0x305e70, Func Offset: 0x190
	// Line 269, Address: 0x305e78, Func Offset: 0x198
	// Line 271, Address: 0x305e80, Func Offset: 0x1a0
	// Line 272, Address: 0x305e88, Func Offset: 0x1a8
	// Line 274, Address: 0x305e90, Func Offset: 0x1b0
	// Line 275, Address: 0x305e98, Func Offset: 0x1b8
	// Line 277, Address: 0x305ea0, Func Offset: 0x1c0
	// Line 279, Address: 0x305eac, Func Offset: 0x1cc
	// Line 283, Address: 0x305eb0, Func Offset: 0x1d0
	// Line 286, Address: 0x305ebc, Func Offset: 0x1dc
	// Line 287, Address: 0x305ecc, Func Offset: 0x1ec
	// Line 289, Address: 0x305ed8, Func Offset: 0x1f8
	// Line 290, Address: 0x305ee8, Func Offset: 0x208
	// Line 302, Address: 0x305eec, Func Offset: 0x20c
	// Line 295, Address: 0x305ef0, Func Offset: 0x210
	// Line 302, Address: 0x305ef4, Func Offset: 0x214
	// Line 290, Address: 0x305ef8, Func Offset: 0x218
	// Line 291, Address: 0x305f00, Func Offset: 0x220
	// Line 292, Address: 0x305f0c, Func Offset: 0x22c
	// Line 293, Address: 0x305f18, Func Offset: 0x238
	// Line 294, Address: 0x305f20, Func Offset: 0x240
	// Line 295, Address: 0x305f28, Func Offset: 0x248
	// Line 296, Address: 0x305f30, Func Offset: 0x250
	// Line 297, Address: 0x305f34, Func Offset: 0x254
	// Line 296, Address: 0x305f38, Func Offset: 0x258
	// Line 297, Address: 0x305f40, Func Offset: 0x260
	// Line 298, Address: 0x305f4c, Func Offset: 0x26c
	// Line 299, Address: 0x305f5c, Func Offset: 0x27c
	// Line 300, Address: 0x305f68, Func Offset: 0x288
	// Line 301, Address: 0x305f74, Func Offset: 0x294
	// Line 302, Address: 0x305f7c, Func Offset: 0x29c
	// Line 303, Address: 0x305f84, Func Offset: 0x2a4
	// Line 304, Address: 0x305f90, Func Offset: 0x2b0
	// Line 305, Address: 0x305f9c, Func Offset: 0x2bc
	// Line 306, Address: 0x305fac, Func Offset: 0x2cc
	// Line 310, Address: 0x305fb8, Func Offset: 0x2d8
	// Line 311, Address: 0x305fc8, Func Offset: 0x2e8
	// Line 312, Address: 0x305fd4, Func Offset: 0x2f4
	// Line 315, Address: 0x305fd8, Func Offset: 0x2f8
	// Line 316, Address: 0x305fe8, Func Offset: 0x308
	// Line 317, Address: 0x305ff4, Func Offset: 0x314
	// Line 320, Address: 0x305ff8, Func Offset: 0x318
	// Line 322, Address: 0x306010, Func Offset: 0x330
	// Line 323, Address: 0x306018, Func Offset: 0x338
	// Func End, Address: 0x306048, Func Offset: 0x368
}

