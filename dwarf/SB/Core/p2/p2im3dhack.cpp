typedef struct RxPipelineNodeParam;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct RxPipeline;
typedef struct RwSurfaceProperties;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RwMeshCache;
typedef struct rxHeapFreeBlock;
typedef struct RpMesh;
typedef struct RwResEntry;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef struct RpMaterial;
typedef struct RxPS2AllPipeData;
typedef struct rxNodePS2AllPvtData;
typedef struct RxClusterDefinition;
typedef struct rxNodePS2AllMatPvtData;
typedef struct RpMeshHeader;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RwTexture;
typedef struct RxNodeMethods;
typedef enum RpMeshHeaderFlags;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct rwPS2AllFieldRec;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct RwLinkList;
typedef enum RxInstanceFlags;
typedef struct rwPS2AllResEntryFormat;

typedef int32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_3)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_5)(RxNodeDefinition*);
typedef void(*type_6)(RxNodeDefinition*);
typedef int32(*type_8)(RxPipelineNode*);
typedef void(*type_9)(RxPipelineNode*);
typedef int32(*type_10)(RxPS2AllPipeData*, void**, uint32);
typedef int32(*type_12)(RxPS2AllPipeData*);
typedef void(*type_14)(RwResEntry*);
typedef RwResEntry*(*type_15)(RxPS2AllPipeData*, RwResEntry**, uint32, type_14);
typedef int32(*type_16)(RxPS2AllPipeData*);
typedef int32(*type_18)(RxPS2AllPipeData*);

typedef uint32 type_1[12];
typedef uint8 type_2[2];
typedef rwPS2AllFieldRec type_7[12];
typedef RwResEntry* type_11[1];
typedef uint32 type_13[4];
typedef int8 type_17[32];
typedef int8 type_19[32];
typedef RxCluster type_20[1];
typedef uint8 type_21[1];
typedef rwPS2AllClusterInstanceInfo type_22[12];

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
	type_13 pad;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RwMeshCache
{
	uint32 lengthOfMeshesArray;
	type_11 meshes;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct RpMesh
{
	uint16* indices;
	uint32 numIndices;
	RpMaterial* material;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_14 destroyNotify;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	int16 refCount;
	int16 pad;
};

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

struct rxNodePS2AllPvtData
{
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct rxNodePS2AllMatPvtData
{
	type_12 meshInstanceTestCB;
	type_15 resEntryAllocCB;
	type_10 instanceCB;
	type_16 bridgeCB;
	type_18 postMeshCB;
	int32 vifOffset;
	void** vu1CodeArray;
	uint32 codeArrayLength;
	type_22 clinfo;
	type_1 cliIndex;
	RpMeshHeaderFlags pipeType;
	uint8 totallyOpaque;
	uint8 numStripes;
	uint8 sizeOnVU;
	uint8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	uint32 magicValue;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct rwPS2AllClusterInstanceInfo
{
	uint32 attrib;
	uint32 stride;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_17 name;
	type_19 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RxNodeMethods
{
	type_4 nodeBody;
	type_5 nodeInit;
	type_6 nodeTerm;
	type_8 pipelineNodeInit;
	type_9 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_3 configMsgHandler;
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
	type_21 pad;
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
	type_20 clusters;
};

struct RwLinkList
{
	RwLLLink link;
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

struct rwPS2AllResEntryFormat
{
	uint8 batchRound;
	uint8 stripReverse;
	type_2 pad;
	uint32 maxInputSize;
	int32 batchSize;
	int32 batchesPerTag;
	int32 morphBatchSize;
	int32 morphBatchesPerTag;
	type_7 fieldRec;
};

int32 gRWPS2FastPath;
type_10 oldTriInstanceCB;

void p2EnableFastIm3D();

// p2EnableFastIm3D__Fv
// Start address: 0x1bb100
void p2EnableFastIm3D()
{
}

