typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct RpAtomic;
typedef struct rxHeapFreeBlock;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpInterpolator;
typedef struct ptank_context;
typedef struct RxNodeDefinition;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxHeap;
typedef struct group_data;
typedef struct RwRGBA;
typedef struct RpMaterialList;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterial;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct RpMorphTarget;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RwFrame;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpMeshHeader;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpTriangle;
typedef struct ptank_pool;
typedef struct _class;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef struct RwResEntry;
typedef struct RxClusterDefinition;
typedef struct RwSphere;
typedef struct RwTexture;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum ptank_group_type;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct render_state;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct RwLinkList;

typedef int32(*type_0)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef void(*type_2)(RxPipelineNode*);
typedef int32(*type_3)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_4)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_5)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(RxNodeDefinition*);
typedef RpClump*(*type_8)(RpClump*, void*);
typedef int32(*type_9)(void*, void*);
typedef RpAtomic*(*type_12)(RpAtomic*);
typedef void(*type_17)(RwResEntry*);

typedef group_data type_10[2];
typedef uint16 type_11[3];
typedef uint32 type_13[4];
typedef RwTexCoords* type_14[8];
typedef int8 type_15[32];
typedef int8 type_16[32];
typedef RxCluster type_18[1];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

struct ptank_context
{
	ptank_context* next;
	RpAtomic* ptank;
	uint32 flags;
	uint32 src_blend;
	uint32 dst_blend;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct group_data
{
	uint32 max_size;
	uint32 create_flags;
	ptank_context* ptanks;
	ptank_context** buckets;
	uint32 size;
	uint32 used;
	uint32 buckets_used;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwV3d
{
	float32 x;
	float32 y;
	float32 z;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct ptank_pool
{
	render_state rs;
	uint32 used;
	RpAtomic* ptank;
	_class hide;

	void flush();
	void grab_block(ptank_group_type type);
};

struct _class
{
	uint8* data;
	int32 stride;
	uint32 size;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
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

enum ptank_group_type
{
	PGT_COLOR_MAT_UV2,
	PGT_POS_COLOR_SIZE_UV2,
	MAX_PGT
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

struct render_state
{
	RwTexture* texture;
	uint32 src_blend;
	uint32 dst_blend;
	uint32 flags;
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

struct RwLinkList
{
	RwLLLink link;
};

uint8 inited;
group_data groups[2];
int32 _rpPTankAtomicDataOffset;
int32(*compare_ptanks)(void*, void*);
uint32 gActiveHeap;

void flush();
void grab_block(ptank_group_type type);
void xPTankPoolRender();
void xPTankPoolSceneExit();
void xPTankPoolSceneEnter();
int32 compare_ptanks(void* e1, void* e2);
RpAtomic* create_ptank(uint32 flags);
void init_groups();
void sort_buckets(group_data& group);

// flush__10ptank_poolFv
// Start address: 0x3afc10
void ptank_pool::flush()
{
	int32 oldused;
	int32 expand;
	int32 total;
	uint8* it;
	uint8* end;
	// Line 360, Address: 0x3afc10, Func Offset: 0
	// Line 361, Address: 0x3afc28, Func Offset: 0x18
	// Line 367, Address: 0x3afc34, Func Offset: 0x24
	// Line 368, Address: 0x3afc3c, Func Offset: 0x2c
	// Line 369, Address: 0x3afc54, Func Offset: 0x44
	// Line 370, Address: 0x3afc70, Func Offset: 0x60
	// Line 372, Address: 0x3afc88, Func Offset: 0x78
	// Line 373, Address: 0x3afc98, Func Offset: 0x88
	// Line 374, Address: 0x3afcc0, Func Offset: 0xb0
	// Line 375, Address: 0x3afcf4, Func Offset: 0xe4
	// Line 377, Address: 0x3afcf8, Func Offset: 0xe8
	// Func End, Address: 0x3afd14, Func Offset: 0x104
}

// grab_block__10ptank_poolF16ptank_group_type
// Start address: 0x3afd20
void ptank_pool::grab_block(ptank_group_type type)
{
	group_data& group;
	ptank_context** end;
	ptank_context** it;
	ptank_context** it;
	// Line 294, Address: 0x3afd20, Func Offset: 0
	// Line 298, Address: 0x3afd24, Func Offset: 0x4
	// Line 294, Address: 0x3afd28, Func Offset: 0x8
	// Line 297, Address: 0x3afd44, Func Offset: 0x24
	// Line 298, Address: 0x3afd48, Func Offset: 0x28
	// Line 301, Address: 0x3afd60, Func Offset: 0x40
	// Line 304, Address: 0x3afe18, Func Offset: 0xf8
	// Line 301, Address: 0x3afe1c, Func Offset: 0xfc
	// Line 304, Address: 0x3afe20, Func Offset: 0x100
	// Line 307, Address: 0x3afe24, Func Offset: 0x104
	// Line 304, Address: 0x3afe28, Func Offset: 0x108
	// Line 307, Address: 0x3afe2c, Func Offset: 0x10c
	// Line 309, Address: 0x3afe3c, Func Offset: 0x11c
	// Line 314, Address: 0x3afe48, Func Offset: 0x128
	// Line 321, Address: 0x3afe9c, Func Offset: 0x17c
	// Line 322, Address: 0x3afea0, Func Offset: 0x180
	// Line 323, Address: 0x3afeb4, Func Offset: 0x194
	// Line 324, Address: 0x3afec0, Func Offset: 0x1a0
	// Line 325, Address: 0x3afec8, Func Offset: 0x1a8
	// Line 326, Address: 0x3afed0, Func Offset: 0x1b0
	// Line 329, Address: 0x3afee0, Func Offset: 0x1c0
	// Line 331, Address: 0x3afef4, Func Offset: 0x1d4
	// Line 336, Address: 0x3afefc, Func Offset: 0x1dc
	// Line 338, Address: 0x3aff1c, Func Offset: 0x1fc
	// Line 339, Address: 0x3aff50, Func Offset: 0x230
	// Line 344, Address: 0x3b0010, Func Offset: 0x2f0
	// Line 345, Address: 0x3b001c, Func Offset: 0x2fc
	// Line 347, Address: 0x3b0034, Func Offset: 0x314
	// Line 352, Address: 0x3b0040, Func Offset: 0x320
	// Line 347, Address: 0x3b0044, Func Offset: 0x324
	// Line 348, Address: 0x3b0088, Func Offset: 0x368
	// Line 349, Address: 0x3b0094, Func Offset: 0x374
	// Line 352, Address: 0x3b00a0, Func Offset: 0x380
	// Line 353, Address: 0x3b00b0, Func Offset: 0x390
	// Line 354, Address: 0x3b00bc, Func Offset: 0x39c
	// Line 355, Address: 0x3b00c4, Func Offset: 0x3a4
	// Line 356, Address: 0x3b00cc, Func Offset: 0x3ac
	// Line 357, Address: 0x3b00e0, Func Offset: 0x3c0
	// Func End, Address: 0x3b0100, Func Offset: 0x3e0
}

// xPTankPoolRender__Fv
// Start address: 0x3b0100
void xPTankPoolRender()
{
	group_data* g;
	group_data* endg;
	ptank_context* p;
	ptank_context* endp;
	// Line 264, Address: 0x3b0100, Func Offset: 0
	// Line 266, Address: 0x3b0104, Func Offset: 0x4
	// Line 264, Address: 0x3b0108, Func Offset: 0x8
	// Line 266, Address: 0x3b010c, Func Offset: 0xc
	// Line 264, Address: 0x3b0110, Func Offset: 0x10
	// Line 266, Address: 0x3b011c, Func Offset: 0x1c
	// Line 267, Address: 0x3b0124, Func Offset: 0x24
	// Line 270, Address: 0x3b0130, Func Offset: 0x30
	// Line 272, Address: 0x3b0148, Func Offset: 0x48
	// Line 273, Address: 0x3b0154, Func Offset: 0x54
	// Line 274, Address: 0x3b016c, Func Offset: 0x6c
	// Line 276, Address: 0x3b0194, Func Offset: 0x94
	// Line 278, Address: 0x3b01a4, Func Offset: 0xa4
	// Line 279, Address: 0x3b01d0, Func Offset: 0xd0
	// Line 280, Address: 0x3b01e0, Func Offset: 0xe0
	// Line 281, Address: 0x3b01e8, Func Offset: 0xe8
	// Line 283, Address: 0x3b01f8, Func Offset: 0xf8
	// Line 284, Address: 0x3b0210, Func Offset: 0x110
	// Line 286, Address: 0x3b0220, Func Offset: 0x120
	// Line 288, Address: 0x3b0230, Func Offset: 0x130
	// Line 289, Address: 0x3b023c, Func Offset: 0x13c
	// Line 290, Address: 0x3b0250, Func Offset: 0x150
	// Func End, Address: 0x3b026c, Func Offset: 0x16c
}

// xPTankPoolSceneExit__Fv
// Start address: 0x3b0270
void xPTankPoolSceneExit()
{
	group_data* g;
	group_data* endg;
	ptank_context* p;
	ptank_context* endp;
	// Line 255, Address: 0x3b0270, Func Offset: 0
	// Line 258, Address: 0x3b028c, Func Offset: 0x1c
	// Line 255, Address: 0x3b0294, Func Offset: 0x24
	// Line 258, Address: 0x3b0298, Func Offset: 0x28
	// Line 259, Address: 0x3b02a8, Func Offset: 0x38
	// Line 260, Address: 0x3b02c8, Func Offset: 0x58
	// Line 261, Address: 0x3b0320, Func Offset: 0xb0
	// Func End, Address: 0x3b0344, Func Offset: 0xd4
}

// xPTankPoolSceneEnter__Fv
// Start address: 0x3b0350
void xPTankPoolSceneEnter()
{
	group_data* it;
	group_data* end;
	// Line 240, Address: 0x3b0350, Func Offset: 0
	// Line 242, Address: 0x3b0354, Func Offset: 0x4
	// Line 240, Address: 0x3b0358, Func Offset: 0x8
	// Line 243, Address: 0x3b036c, Func Offset: 0x1c
	// Line 246, Address: 0x3b0374, Func Offset: 0x24
	// Line 249, Address: 0x3b0394, Func Offset: 0x44
	// Line 251, Address: 0x3b04a8, Func Offset: 0x158
	// Line 252, Address: 0x3b04b8, Func Offset: 0x168
	// Func End, Address: 0x3b04d4, Func Offset: 0x184
}

// compare_ptanks__24@unnamed@xPtankPool_cpp@FPCvPCv
// Start address: 0x3b04e0
int32 compare_ptanks(void* e1, void* e2)
{
	ptank_context* p1;
	ptank_context* p2;
	RwTexture* tex1;
	RwTexture* tex2;
	// Line 219, Address: 0x3b04e0, Func Offset: 0
	// Line 224, Address: 0x3b04e8, Func Offset: 0x8
	// Line 225, Address: 0x3b0500, Func Offset: 0x20
	// Line 226, Address: 0x3b0520, Func Offset: 0x40
	// Line 227, Address: 0x3b0538, Func Offset: 0x58
	// Line 228, Address: 0x3b0550, Func Offset: 0x70
	// Line 229, Address: 0x3b0554, Func Offset: 0x74
	// Line 228, Address: 0x3b0558, Func Offset: 0x78
	// Line 229, Address: 0x3b055c, Func Offset: 0x7c
	// Line 228, Address: 0x3b0560, Func Offset: 0x80
	// Line 229, Address: 0x3b0564, Func Offset: 0x84
	// Line 228, Address: 0x3b0568, Func Offset: 0x88
	// Line 229, Address: 0x3b056c, Func Offset: 0x8c
	// Line 228, Address: 0x3b0570, Func Offset: 0x90
	// Line 229, Address: 0x3b0574, Func Offset: 0x94
	// Line 230, Address: 0x3b0578, Func Offset: 0x98
	// Line 231, Address: 0x3b0590, Func Offset: 0xb0
	// Line 233, Address: 0x3b0598, Func Offset: 0xb8
	// Func End, Address: 0x3b05a0, Func Offset: 0xc0
}

// create_ptank__24@unnamed@xPtankPool_cpp@FUi
// Start address: 0x3b05a0
RpAtomic* create_ptank(uint32 flags)
{
	RpAtomic* ptank;
	RwFrame* frame;
	// Line 169, Address: 0x3b05a0, Func Offset: 0
	// Line 168, Address: 0x3b05a4, Func Offset: 0x4
	// Line 169, Address: 0x3b05a8, Func Offset: 0x8
	// Line 168, Address: 0x3b05ac, Func Offset: 0xc
	// Line 169, Address: 0x3b05b0, Func Offset: 0x10
	// Line 170, Address: 0x3b05c4, Func Offset: 0x24
	// Line 171, Address: 0x3b05d8, Func Offset: 0x38
	// Line 172, Address: 0x3b05e0, Func Offset: 0x40
	// Line 173, Address: 0x3b05f8, Func Offset: 0x58
	// Line 174, Address: 0x3b0610, Func Offset: 0x70
	// Line 173, Address: 0x3b0614, Func Offset: 0x74
	// Line 174, Address: 0x3b0618, Func Offset: 0x78
	// Line 173, Address: 0x3b061c, Func Offset: 0x7c
	// Line 174, Address: 0x3b0644, Func Offset: 0xa4
	// Line 175, Address: 0x3b064c, Func Offset: 0xac
	// Line 176, Address: 0x3b0654, Func Offset: 0xb4
	// Line 175, Address: 0x3b0658, Func Offset: 0xb8
	// Line 176, Address: 0x3b0664, Func Offset: 0xc4
	// Line 178, Address: 0x3b0668, Func Offset: 0xc8
	// Func End, Address: 0x3b0678, Func Offset: 0xd8
}

// init_groups__24@unnamed@xPtankPool_cpp@Fv
// Start address: 0x3b0680
void init_groups()
{
	uint32 total;
	group_data* it;
	group_data* end;
	uint8* mem;
	group_data* it;
	group_data* end;
	// Line 141, Address: 0x3b0680, Func Offset: 0
	// Line 144, Address: 0x3b0684, Func Offset: 0x4
	// Line 141, Address: 0x3b0688, Func Offset: 0x8
	// Line 144, Address: 0x3b068c, Func Offset: 0xc
	// Line 141, Address: 0x3b0690, Func Offset: 0x10
	// Line 144, Address: 0x3b0694, Func Offset: 0x14
	// Line 141, Address: 0x3b0698, Func Offset: 0x18
	// Line 144, Address: 0x3b069c, Func Offset: 0x1c
	// Line 141, Address: 0x3b06a0, Func Offset: 0x20
	// Line 144, Address: 0x3b06a4, Func Offset: 0x24
	// Line 147, Address: 0x3b06b0, Func Offset: 0x30
	// Line 148, Address: 0x3b06b4, Func Offset: 0x34
	// Line 147, Address: 0x3b06b8, Func Offset: 0x38
	// Line 148, Address: 0x3b06bc, Func Offset: 0x3c
	// Line 151, Address: 0x3b06c8, Func Offset: 0x48
	// Line 155, Address: 0x3b06ec, Func Offset: 0x6c
	// Line 157, Address: 0x3b0708, Func Offset: 0x88
	// Line 163, Address: 0x3b0710, Func Offset: 0x90
	// Line 157, Address: 0x3b0714, Func Offset: 0x94
	// Line 158, Address: 0x3b0718, Func Offset: 0x98
	// Line 159, Address: 0x3b071c, Func Offset: 0x9c
	// Line 160, Address: 0x3b0730, Func Offset: 0xb0
	// Line 161, Address: 0x3b0734, Func Offset: 0xb4
	// Line 162, Address: 0x3b0740, Func Offset: 0xc0
	// Line 163, Address: 0x3b0748, Func Offset: 0xc8
	// Line 164, Address: 0x3b0750, Func Offset: 0xd0
	// Line 165, Address: 0x3b0760, Func Offset: 0xe0
	// Func End, Address: 0x3b0778, Func Offset: 0xf8
}

// sort_buckets__24@unnamed@xPtankPool_cpp@FRQ224@unnamed@xPtankPool_cpp@10group_data
// Start address: 0x3b0780
void sort_buckets(group_data& group)
{
	ptank_context* it;
	ptank_context* endp;
	RwTexture* texture;
	ptank_context** bucket;
	ptank_context** end;
	ptank_context* front;
	// Line 107, Address: 0x3b0780, Func Offset: 0
	// Line 108, Address: 0x3b0784, Func Offset: 0x4
	// Line 107, Address: 0x3b0788, Func Offset: 0x8
	// Line 108, Address: 0x3b0790, Func Offset: 0x10
	// Line 109, Address: 0x3b07a4, Func Offset: 0x24
	// Line 110, Address: 0x3b07ac, Func Offset: 0x2c
	// Line 112, Address: 0x3b07d0, Func Offset: 0x50
	// Line 114, Address: 0x3b07e4, Func Offset: 0x64
	// Line 116, Address: 0x3b07ec, Func Offset: 0x6c
	// Line 117, Address: 0x3b07fc, Func Offset: 0x7c
	// Line 121, Address: 0x3b0808, Func Offset: 0x88
	// Line 120, Address: 0x3b080c, Func Offset: 0x8c
	// Line 121, Address: 0x3b0810, Func Offset: 0x90
	// Line 122, Address: 0x3b081c, Func Offset: 0x9c
	// Line 124, Address: 0x3b0828, Func Offset: 0xa8
	// Line 127, Address: 0x3b082c, Func Offset: 0xac
	// Line 132, Address: 0x3b0880, Func Offset: 0x100
	// Line 133, Address: 0x3b0890, Func Offset: 0x110
	// Line 134, Address: 0x3b08a4, Func Offset: 0x124
	// Line 135, Address: 0x3b08a8, Func Offset: 0x128
	// Line 136, Address: 0x3b08b0, Func Offset: 0x130
	// Line 137, Address: 0x3b08b4, Func Offset: 0x134
	// Line 138, Address: 0x3b08c0, Func Offset: 0x140
	// Func End, Address: 0x3b08d0, Func Offset: 0x150
}

