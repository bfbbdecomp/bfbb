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

typedef s32(*type_0)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef void(*type_2)(RxPipelineNode*);
typedef s32(*type_3)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_4)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_5)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(RxNodeDefinition*);
typedef RpClump*(*type_8)(RpClump*, void*);
typedef s32(*type_9)(void*, void*);
typedef RpAtomic*(*type_12)(RpAtomic*);
typedef void(*type_17)(RwResEntry*);

typedef group_data type_10[2];
typedef u16 type_11[3];
typedef u32 type_13[4];
typedef RwTexCoords* type_14[8];
typedef s8 type_15[32];
typedef s8 type_16[32];
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
	u32 numOutputs;
	u32* outputs;
	RxPipelineCluster** slotClusterRefs;
	u32* slotsContinue;
	void* privateData;
	u32* inputToClusterSlot;
	RxPipelineNodeTopSortData* topSortData;
	void* initializationData;
	u32 initializationDataSize;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
};

struct ptank_context
{
	ptank_context* next;
	RpAtomic* ptank;
	u32 flags;
	u32 src_blend;
	u32 dst_blend;
};

struct RxNodeDefinition
{
	s8* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	u32 pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	s32 InputPipesCnt;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct RxPipeline
{
	s32 locked;
	u32 numNodes;
	RxPipelineNode* nodes;
	u32 packetNumClusterSlots;
	rxEmbeddedPacketState embeddedPacketState;
	RxPacket* embeddedPacket;
	u32 numInputRequirements;
	RxPipelineRequiresCluster* inputRequirements;
	void* superBlock;
	u32 superBlockSize;
	u32 entryPoint;
	u32 pluginId;
	u32 pluginData;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxHeap
{
	u32 superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	u32 entriesAlloced;
	u32 entriesUsed;
	s32 dirty;
};

struct group_data
{
	u32 max_size;
	u32 create_flags;
	ptank_context* ptanks;
	ptank_context** buckets;
	u32 size;
	u32 used;
	u32 buckets_used;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
};

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	s16 refCount;
	s16 pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_13 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	u32 flags;
	u16 lockedSinceLastInst;
	s16 refCount;
	s32 numTriangles;
	s32 numVertices;
	s32 numMorphTargets;
	s32 numTexCoordSets;
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
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct RwMatrixTag
{
	RwV3d right;
	u32 flags;
	RwV3d up;
	u32 pad1;
	RwV3d at;
	u32 pad2;
	RwV3d pos;
	u32 pad3;
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
	u8* cpPixels;
	u8* palette;
	s32 width;
	s32 height;
	s32 depth;
	s32 stride;
	s16 nOffsetX;
	s16 nOffsetY;
	u8 cType;
	u8 cFlags;
	u8 privateFlags;
	u8 cFormat;
	u8* originalPixels;
	s32 originalWidth;
	s32 originalHeight;
	s32 originalStride;
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
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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
	s16 matIndex;
};

struct ptank_pool
{
	render_state rs;
	u32 used;
	RpAtomic* ptank;
	_class hide;
};

struct _class
{
	u8* data;
	s32 stride;
	u32 size;
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
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_17 destroyNotify;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_15 name;
	type_16 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	s8* name;
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
	u32 reserved;
};

struct RwObject
{
	u8 type;
	u8 subType;
	u8 flags;
	u8 privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
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
	u32 src_blend;
	u32 dst_blend;
	u32 flags;
};

struct RxCluster
{
	u16 flags;
	u16 stride;
	void* data;
	void* currentData;
	u32 numAlloced;
	u32 numUsed;
	RxPipelineCluster* clusterRef;
	u32 attributes;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_18 clusters;
};

struct RwLinkList
{
	RwLLLink link;
};

u8 inited;
type_10 groups;
s32 _rpPTankAtomicDataOffset;
type_9 compare_ptanks;
u32 gActiveHeap;

void flush(ptank_pool* this);
void grab_block(ptank_pool* this, ptank_group_type type);
void xPTankPoolRender();
void xPTankPoolSceneExit();
void xPTankPoolSceneEnter();
s32 compare_ptanks(void* e1, void* e2);
RpAtomic* create_ptank(u32 flags);
void init_groups();
void sort_buckets(group_data& group);

// flush__10ptank_poolFv
// Start address: 0x3afc10
void flush(ptank_pool* this)
{
	s32 oldused;
	s32 expand;
	s32 total;
	u8* it;
	u8* end;
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
s32 compare_ptanks(void* e1, void* e2)
{
	ptank_context* p1;
	ptank_context* p2;
	RwTexture* tex1;
	RwTexture* tex2;
}

// create_ptank__24@unnamed@xPtankPool_cpp@FUi
// Start address: 0x3b05a0
RpAtomic* create_ptank(u32 flags)
{
	RpAtomic* ptank;
	RwFrame* frame;
}

// init_groups__24@unnamed@xPtankPool_cpp@Fv
// Start address: 0x3b0680
void init_groups()
{
	u32 total;
	group_data* it;
	group_data* end;
	u8* mem;
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

