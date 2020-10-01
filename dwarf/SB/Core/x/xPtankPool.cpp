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
	type_1 sync;
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
	type_12 renderCallBack;
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
	type_13 pad;
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
	type_8 callback;
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
	type_11 vertIndex;
	int16 matIndex;
};

struct ptank_pool
{
	render_state rs;
	uint32 used;
	RpAtomic* ptank;
	_class hide;
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
	type_17 destroyNotify;
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
	type_15 name;
	type_16 mask;
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
	type_5 nodeBody;
	type_6 nodeInit;
	type_7 nodeTerm;
	type_0 pipelineNodeInit;
	type_2 pipelineNodeTerm;
	type_3 pipelineNodeConfig;
	type_4 configMsgHandler;
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
	type_18 clusters;
};

struct RwLinkList
{
	RwLLLink link;
};

uint8 inited;
type_10 groups;
int32 _rpPTankAtomicDataOffset;
type_9 compare_ptanks;
uint32 gActiveHeap;

void flush(ptank_pool* this);
void grab_block(ptank_pool* this, ptank_group_type type);
void xPTankPoolRender();
void xPTankPoolSceneExit();
void xPTankPoolSceneEnter();
int32 compare_ptanks(void* e1, void* e2);
RpAtomic* create_ptank(uint32 flags);
void init_groups();
void sort_buckets(group_data& group);

// flush__10ptank_poolFv
// Start address: 0x3afc10
void flush(ptank_pool* this)
{
	int32 oldused;
	int32 expand;
	int32 total;
	uint8* it;
	uint8* end;
}

// grab_block__10ptank_poolF16ptank_group_type
// Start address: 0x3afd20
void grab_block(ptank_pool* this, ptank_group_type type)
{
	group_data& group;
	ptank_context** end;
	ptank_context** it;
	ptank_context** it;
}

// xPTankPoolRender__Fv
// Start address: 0x3b0100
void xPTankPoolRender()
{
	group_data* g;
	group_data* endg;
	ptank_context* p;
	ptank_context* endp;
}

// xPTankPoolSceneExit__Fv
// Start address: 0x3b0270
void xPTankPoolSceneExit()
{
	group_data* g;
	group_data* endg;
	ptank_context* p;
	ptank_context* endp;
}

// xPTankPoolSceneEnter__Fv
// Start address: 0x3b0350
void xPTankPoolSceneEnter()
{
	group_data* it;
	group_data* end;
}

// compare_ptanks__24@unnamed@xPtankPool_cpp@FPCvPCv
// Start address: 0x3b04e0
int32 compare_ptanks(void* e1, void* e2)
{
	ptank_context* p1;
	ptank_context* p2;
	RwTexture* tex1;
	RwTexture* tex2;
}

// create_ptank__24@unnamed@xPtankPool_cpp@FUi
// Start address: 0x3b05a0
RpAtomic* create_ptank(uint32 flags)
{
	RpAtomic* ptank;
	RwFrame* frame;
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
}

