typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct DirtyMorph;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RpAtomic;
typedef struct RpGeometry;
typedef struct RwMatrixTag;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterialList;
typedef struct RpMaterial;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct RwSurfaceProperties;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct RpUserDataArray;
typedef enum RxClusterValidityReq;
typedef struct RpMorphTarget;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpMeshHeader;
typedef struct rxHeapFreeBlock;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef struct RpTriangle;
typedef struct RxClusterDefinition;
typedef struct RwResEntry;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum RpUserDataFormat;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RwTexture;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct RpInterpolator;

typedef uint32(*type_0)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_1)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_2)(RxNodeDefinition*);
typedef void(*type_3)(RxNodeDefinition*);
typedef int32(*type_4)(RxPipelineNode*);
typedef void(*type_5)(RxPipelineNode*);
typedef int32(*type_6)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_8)(RpClump*, void*);
typedef RpAtomic*(*type_11)(RpAtomic*);
typedef void(*type_18)(RwResEntry*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);

typedef int16 type_7[4];
typedef int16* type_9[4];
typedef uint16 type_10[3];
typedef uint32 type_12[4];
typedef int16 type_13[4];
typedef int16* type_14[4];
typedef RwTexCoords* type_15[8];
typedef int8 type_16[32];
typedef int8 type_17[32];
typedef RxCluster type_19[1];

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

struct DirtyMorph
{
	uint32 count;
	float32 scale;
	type_7 weight;
	type_9 v_array;
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
	type_12 pad;
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
	type_11 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_15 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_8 callback;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
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

struct RpUserDataArray
{
	int8* name;
	RpUserDataFormat format;
	int32 numElements;
	void* data;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpTriangle
{
	type_10 vertIndex;
	int16 matIndex;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_18 destroyNotify;
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

enum RpUserDataFormat
{
	rpNAUSERDATAFORMAT,
	rpINTUSERDATA,
	rpREALUSERDATA,
	rpSTRINGUSERDATA,
	rpUSERDATAFORCEENUMSIZEINT = 0x7fffffff
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_16 name;
	type_17 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RxNodeMethods
{
	type_1 nodeBody;
	type_2 nodeInit;
	type_3 nodeTerm;
	type_4 pipelineNodeInit;
	type_5 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_0 configMsgHandler;
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
	type_19 clusters;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_20 sync;
};

struct RwLinkList
{
	RwLLLink link;
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

RpGeometry* s_geom;
RpMorphTarget* s_tgt;
float32* s_alloc;
float32* s_vTemp;
float32* s_nTemp;
int32 s_numV;

void FastS16weight4(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale);
void FastS16weight2(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale);
void FastS16unpack(float32* dest, int16* v, int32 count, float32 scale);
void iMorphRender(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale);
void iMorphOptimize(RpAtomic* model, int32 normals);
void MorphCommon(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale, int32 dorender);

// FastS16weight4__FPfPPsPsif
// Start address: 0x1af420
void FastS16weight4(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale)
{
}

// FastS16weight2__FPfPPsPsif
// Start address: 0x1af570
void FastS16weight2(float32* dest, int16** v_array, int16* weight, int32 count, float32 scale)
{
}

// FastS16unpack__FPfPsif
// Start address: 0x1af680
void FastS16unpack(float32* dest, int16* v, int32 count, float32 scale)
{
}

// iMorphRender__FP8RpAtomicP11RwMatrixTagPPsPsUif
// Start address: 0x1af770
void iMorphRender(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale)
{
}

// iMorphOptimize__FP8RpAtomici
// Start address: 0x1af7b0
void iMorphOptimize(RpAtomic* model, int32 normals)
{
	RpGeometry* geom;
	int32 usridx;
	RpUserDataArray* usr;
}

// MorphCommon__FP8RpAtomicP11RwMatrixTagPPsPsUifi
// Start address: 0x1af840
void MorphCommon(RpAtomic* model, RwMatrixTag* mat, int16** v_array, int16* weight, uint32 normals, float32 scale, int32 dorender)
{
	uint32 i;
	uint32 a;
	type_13 wa;
	type_14 va;
	int32 wsum;
	RwV3d* vold;
	RwV3d* nold;
	int32 lockMode;
	RpUserDataArray* usr;
	DirtyMorph* dm;
}

