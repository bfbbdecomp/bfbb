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
	type_0 sync;
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
	type_16 name;
	type_17 mask;
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
	type_15 texCoords;
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
	type_13 pad;
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
	type_3 renderCallBack;
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
	type_9 matrix;
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
	type_12 vertIndex;
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
	type_18 destroyNotify;
};

struct RxNodeMethods
{
	type_5 nodeBody;
	type_6 nodeInit;
	type_7 nodeTerm;
	type_8 pipelineNodeInit;
	type_1 pipelineNodeTerm;
	type_2 pipelineNodeConfig;
	type_4 configMsgHandler;
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
	type_19 clusters;
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
type_14 ourGlobals;

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
}

// xLightKit_GetCurrent__FP7RpWorld
// Start address: 0x305bd0
xLightKit* xLightKit_GetCurrent()
{
}

// xLightKit_Enable__FP9xLightKitP7RpWorld
// Start address: 0x305be0
void xLightKit_Enable(xLightKit* lkit, RpWorld* world)
{
	uint32 i;
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
}

