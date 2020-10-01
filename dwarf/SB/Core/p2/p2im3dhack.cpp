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

typedef s32(*type_0)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_3)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_5)(RxNodeDefinition*);
typedef void(*type_6)(RxNodeDefinition*);
typedef s32(*type_8)(RxPipelineNode*);
typedef void(*type_9)(RxPipelineNode*);
typedef s32(*type_10)(RxPS2AllPipeData*, void**, u32);
typedef s32(*type_12)(RxPS2AllPipeData*);
typedef void(*type_14)(RwResEntry*);
typedef RwResEntry*(*type_15)(RxPS2AllPipeData*, RwResEntry**, u32, type_14);
typedef s32(*type_16)(RxPS2AllPipeData*);
typedef s32(*type_18)(RxPS2AllPipeData*);

typedef u32 type_1[12];
typedef u8 type_2[2];
typedef rwPS2AllFieldRec type_7[12];
typedef RwResEntry* type_11[1];
typedef u32 type_13[4];
typedef s8 type_17[32];
typedef s8 type_19[32];
typedef RxCluster type_20[1];
typedef u8 type_21[1];
typedef rwPS2AllClusterInstanceInfo type_22[12];

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

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
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

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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
	u32 lengthOfMeshesArray;
	type_11 meshes;
};

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct RpMesh
{
	u16* indices;
	u32 numIndices;
	RpMaterial* material;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
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
	s16 refCount;
	s16 pad;
};

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	u32 objIdentifier;
	f32 spExtra;
	s32 numMorphTargets;
	u32 fastMorphing;
	u8 transType;
	u8 primType;
	u8 matModulate;
	u8 vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	u32 meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
};

struct rxNodePS2AllPvtData
{
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct rxNodePS2AllMatPvtData
{
	type_12 meshInstanceTestCB;
	type_15 resEntryAllocCB;
	type_10 instanceCB;
	type_16 bridgeCB;
	type_18 postMeshCB;
	s32 vifOffset;
	void** vu1CodeArray;
	u32 codeArrayLength;
	type_22 clinfo;
	type_1 cliIndex;
	RpMeshHeaderFlags pipeType;
	u8 totallyOpaque;
	u8 numStripes;
	u8 sizeOnVU;
	u8 pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	u32 magicValue;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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

struct rwPS2AllClusterInstanceInfo
{
	u32 attrib;
	u32 stride;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_17 name;
	type_19 mask;
	u32 filterAddressing;
	s32 refCount;
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
	u32 creationAttributes;
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

struct rwPS2AllFieldRec
{
	s32 numVerts;
	s32 morphNumVerts;
	s32 dataoffset;
	s32 morphDataoffset;
	s16 skip;
	s16 morphSkip;
	s16 reverse;
	u8 vuoffset;
	type_21 pad;
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
	u8 batchRound;
	u8 stripReverse;
	type_2 pad;
	u32 maxInputSize;
	s32 batchSize;
	s32 batchesPerTag;
	s32 morphBatchSize;
	s32 morphBatchesPerTag;
	type_7 fieldRec;
};

s32 gRWPS2FastPath;
type_10 oldTriInstanceCB;

void p2EnableFastIm3D();

// p2EnableFastIm3D__Fv
// Start address: 0x1bb100
void p2EnableFastIm3D()
{
}

