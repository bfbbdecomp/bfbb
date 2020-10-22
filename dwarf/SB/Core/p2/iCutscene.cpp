typedef struct RpInterpolator;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct tag_xFile;
typedef struct xCutscene;
typedef struct rxHeapFreeBlock;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxNodeDefinition;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpMaterialList;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RxPipelineNodeParam;
typedef struct xCutsceneData;
typedef struct RpMaterial;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpClump;
typedef struct rxHeapBlockHeader;
typedef struct xCutsceneInfo;
typedef struct RpGeometry;
typedef struct xCutsceneTime;
typedef struct RxPipelineRequiresCluster;
typedef struct RpAtomic;
typedef struct RpMorphTarget;
typedef struct RwSurfaceProperties;
typedef struct xCutsceneBreak;
typedef struct rxReq;
typedef struct RpMeshHeader;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct XCSNNosey;
typedef struct RpTriangle;
typedef struct st_PKR_ASSET_TOCINFO;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct st_PACKER_ASSETTYPE;
typedef struct RwResEntry;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef struct RxClusterDefinition;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RwTexture;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct tag_iFile;
typedef struct RwLinkList;
typedef enum XFILE_READSECTOR_STATUS;

typedef int32(*type_0)(void*, uint32, void*, int32);
typedef int32(*type_1)(RxPipelineNode*);
typedef void*(*type_2)(void*, uint32, void*, int32*, int32*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(RxPipelineNode*);
typedef void(*type_5)(void*, uint32, void*);
typedef void(*type_6)(void*, uint32);
typedef void(*type_7)(void*, uint32, void*, int8*);
typedef int32(*type_8)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_10)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_12)(RxNodeDefinition*);
typedef RpAtomic*(*type_13)(RpAtomic*, void*);
typedef RpClump*(*type_14)(RpClump*, void*);
typedef void(*type_15)(RxNodeDefinition*);
typedef RpAtomic*(*type_19)(RpAtomic*);
typedef void*(*type_20)(void*, uint32, void*, uint32, uint32*);
typedef void(*type_21)(uint32, uint8);
typedef void*(*type_22)(void*, uint32, void*, void*, uint32, uint32*);
typedef void(*type_32)(tag_xFile*);
typedef void(*type_34)(RwResEntry*);

typedef int8 type_9[32];
typedef int8 type_16[16];
typedef int8 type_17[16];
typedef uint16 type_18[3];
typedef uint32 type_23[4];
typedef RwTexCoords* type_24[8];
typedef uint32 type_25[2];
typedef uint32 type_26[4096];
typedef uint32 type_27[2];
typedef int8 type_28[16];
typedef uint32 type_29[2];
typedef int8 type_30[16];
typedef int8 type_31[32];
typedef int8 type_33[32];
typedef int8 type_35[128];
typedef RxCluster type_36[1];

struct RpInterpolator
{
	int32 flags;
	int16 startMorphTarget;
	int16 endMorphTarget;
	float32 time;
	float32 recipTime;
	float32 position;
};

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

struct tag_xFile
{
	int8 relname[32];
	tag_iFile ps;
	void* user_data;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	uint32* TimeChunkOffs;
	uint32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	uint32 Waiting;
	uint32 BadReadPause;
	float32 BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	float32 Time;
	float32 CamTime;
	uint32 PlayIndex;
	uint32 Ready;
	int32 DataLoading;
	uint32 GotData;
	uint32 ShutDownWait;
	float32 PlaybackSpeed;
	uint32 Opened;
	tag_xFile File;
	int32 AsyncID;
	void* MemBuf;
	void* MemCurr;
	uint32 SndStarted;
	uint32 SndNumChannel;
	uint32 SndChannelReq[2];
	uint32 SndAssetID[2];
	uint32 SndHandle[2];
	XCSNNosey* cb_nosey;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
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

struct xCutsceneData
{
	uint32 DataType;
	uint32 AssetID;
	uint32 ChunkSize;
	union
	{
		uint32 FileOffset;
		void* DataPtr;
	};
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	RpClump*(*callback)(RpClump*, void*);
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	uint32 pad[4];
};

struct xCutsceneInfo
{
	uint32 Magic;
	uint32 AssetID;
	uint32 NumData;
	uint32 NumTime;
	uint32 MaxModel;
	uint32 MaxBufEven;
	uint32 MaxBufOdd;
	uint32 HeaderSize;
	uint32 VisCount;
	uint32 VisSize;
	uint32 BreakCount;
	uint32 pad;
	int8 SoundLeft[16];
	int8 SoundRight[16];
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

struct xCutsceneTime
{
	float32 StartTime;
	float32 EndTime;
	uint32 NumData;
	uint32 ChunkIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
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

struct xCutsceneBreak
{
	float32 Time;
	int32 Index;
};

struct rxReq
{
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct XCSNNosey
{
	void* userdata;
	int32 flg_nosey;
};

struct RpTriangle
{
	uint16 vertIndex[3];
	int16 matIndex;
};

struct st_PKR_ASSET_TOCINFO
{
	uint32 aid;
	st_PACKER_ASSETTYPE* typeref;
	uint32 sector;
	uint32 plus_offset;
	uint32 size;
	void* mempos;
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

struct st_PACKER_ASSETTYPE
{
	uint32 typetag;
	uint32 tflags;
	int32 typalign;
	void*(*readXForm)(void*, uint32, void*, uint32, uint32*);
	void*(*writeXForm)(void*, uint32, void*, void*, uint32, uint32*);
	int32(*assetLoaded)(void*, uint32, void*, int32);
	void*(*makeData)(void*, uint32, void*, int32*, int32*);
	void(*cleanup)(void*, uint32, void*);
	void(*assetUnloaded)(void*, uint32);
	void(*writePeek)(void*, uint32, void*, int8*);
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	void(*destroyNotify)(RwResEntry*);
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct tag_iFile
{
	uint32 flags;
	int8 path[128];
	int32 fd;
	int32 offset;
	int32 length;
};

struct RwLinkList
{
	RwLLLink link;
};

enum XFILE_READSECTOR_STATUS
{
	XFILE_RDSTAT_NOOP,
	XFILE_RDSTAT_INPROG,
	XFILE_RDSTAT_DONE,
	XFILE_RDSTAT_FAIL,
	XFILE_RDSTAT_QUEUED,
	XFILE_RDSTAT_EXPIRED
};

int8 buffer[16];
int8 buffer[16];
void(*iCSAsyncReadCB)(tag_xFile*);
void(*iCSSoundCutsceneCB)(uint32, uint8);
RpAtomic*(*FastPipeAtomicCB)(RpAtomic*, void*);
uint32 ourGlobals[4096];
xCutscene sActiveCutscene;

int32 iCSLoadStep(xCutscene* csn);
RpAtomic* FastPipeAtomicCB(RpAtomic* atomic);
void iCSFileClose(xCutscene* csn);
void iCSFileAsyncRead(xCutscene* csn, void* dest, uint32 size);
uint32 iCSFileOpen(xCutscene* csn);
void iCSAsyncReadCB();
void iCSSoundCutsceneCB(uint32 id, uint8 first);
void* iCSSoundGetData(xCutscene* csn, uint32 channel, uint32 chunk);

// iCSLoadStep__FP9xCutscene
// Start address: 0x34b9a0
int32 iCSLoadStep(xCutscene* csn)
{
	int32 bytes;
	XFILE_READSECTOR_STATUS cdstat;
	uint32 skipAccum;
	uint32 tmpSize;
	void* foundModel;
	uint32 i;
	// Line 223, Address: 0x34b9a0, Func Offset: 0
	// Line 227, Address: 0x34b9b4, Func Offset: 0x14
	// Line 236, Address: 0x34b9c0, Func Offset: 0x20
	// Line 237, Address: 0x34b9cc, Func Offset: 0x2c
	// Line 239, Address: 0x34b9e0, Func Offset: 0x40
	// Line 242, Address: 0x34b9e8, Func Offset: 0x48
	// Line 243, Address: 0x34b9fc, Func Offset: 0x5c
	// Line 242, Address: 0x34ba00, Func Offset: 0x60
	// Line 246, Address: 0x34ba04, Func Offset: 0x64
	// Line 248, Address: 0x34ba0c, Func Offset: 0x6c
	// Line 254, Address: 0x34ba30, Func Offset: 0x90
	// Line 248, Address: 0x34ba34, Func Offset: 0x94
	// Line 254, Address: 0x34ba38, Func Offset: 0x98
	// Line 259, Address: 0x34ba58, Func Offset: 0xb8
	// Line 263, Address: 0x34ba7c, Func Offset: 0xdc
	// Line 266, Address: 0x34ba80, Func Offset: 0xe0
	// Line 267, Address: 0x34ba88, Func Offset: 0xe8
	// Line 266, Address: 0x34ba8c, Func Offset: 0xec
	// Line 267, Address: 0x34ba98, Func Offset: 0xf8
	// Line 268, Address: 0x34baa8, Func Offset: 0x108
	// Line 267, Address: 0x34baac, Func Offset: 0x10c
	// Line 268, Address: 0x34bab0, Func Offset: 0x110
	// Line 267, Address: 0x34bab4, Func Offset: 0x114
	// Line 270, Address: 0x34babc, Func Offset: 0x11c
	// Line 273, Address: 0x34bac8, Func Offset: 0x128
	// Line 274, Address: 0x34bad0, Func Offset: 0x130
	// Line 275, Address: 0x34badc, Func Offset: 0x13c
	// Line 279, Address: 0x34bae0, Func Offset: 0x140
	// Line 280, Address: 0x34baf0, Func Offset: 0x150
	// Line 279, Address: 0x34baf4, Func Offset: 0x154
	// Line 280, Address: 0x34bb00, Func Offset: 0x160
	// Line 281, Address: 0x34bb0c, Func Offset: 0x16c
	// Line 284, Address: 0x34bb3c, Func Offset: 0x19c
	// Line 287, Address: 0x34bb4c, Func Offset: 0x1ac
	// Line 288, Address: 0x34bb58, Func Offset: 0x1b8
	// Line 291, Address: 0x34bb68, Func Offset: 0x1c8
	// Line 288, Address: 0x34bb6c, Func Offset: 0x1cc
	// Line 291, Address: 0x34bb70, Func Offset: 0x1d0
	// Line 288, Address: 0x34bb74, Func Offset: 0x1d4
	// Line 291, Address: 0x34bb80, Func Offset: 0x1e0
	// Line 293, Address: 0x34bba0, Func Offset: 0x200
	// Line 298, Address: 0x34bbac, Func Offset: 0x20c
	// Line 293, Address: 0x34bbb0, Func Offset: 0x210
	// Line 296, Address: 0x34bbc4, Func Offset: 0x224
	// Line 297, Address: 0x34bbd0, Func Offset: 0x230
	// Line 299, Address: 0x34bbd4, Func Offset: 0x234
	// Line 300, Address: 0x34bbe0, Func Offset: 0x240
	// Line 301, Address: 0x34bcb0, Func Offset: 0x310
	// Line 302, Address: 0x34bcb8, Func Offset: 0x318
	// Line 305, Address: 0x34bcc0, Func Offset: 0x320
	// Line 302, Address: 0x34bcc4, Func Offset: 0x324
	// Line 305, Address: 0x34bcc8, Func Offset: 0x328
	// Line 308, Address: 0x34bcd8, Func Offset: 0x338
	// Line 309, Address: 0x34bce0, Func Offset: 0x340
	// Line 310, Address: 0x34bcec, Func Offset: 0x34c
	// Line 313, Address: 0x34bcf0, Func Offset: 0x350
	// Line 317, Address: 0x34bcf8, Func Offset: 0x358
	// Line 318, Address: 0x34bd08, Func Offset: 0x368
	// Line 321, Address: 0x34bd18, Func Offset: 0x378
	// Line 322, Address: 0x34bd90, Func Offset: 0x3f0
	// Line 325, Address: 0x34bd9c, Func Offset: 0x3fc
	// Line 329, Address: 0x34bda4, Func Offset: 0x404
	// Line 330, Address: 0x34bdac, Func Offset: 0x40c
	// Line 332, Address: 0x34bdb8, Func Offset: 0x418
	// Line 334, Address: 0x34bdc8, Func Offset: 0x428
	// Line 336, Address: 0x34be00, Func Offset: 0x460
	// Line 338, Address: 0x34be34, Func Offset: 0x494
	// Line 339, Address: 0x34be40, Func Offset: 0x4a0
	// Line 341, Address: 0x34be78, Func Offset: 0x4d8
	// Line 343, Address: 0x34be7c, Func Offset: 0x4dc
	// Line 345, Address: 0x34be80, Func Offset: 0x4e0
	// Line 346, Address: 0x34be84, Func Offset: 0x4e4
	// Line 347, Address: 0x34be88, Func Offset: 0x4e8
	// Line 348, Address: 0x34be94, Func Offset: 0x4f4
	// Line 349, Address: 0x34bf50, Func Offset: 0x5b0
	// Line 350, Address: 0x34bf58, Func Offset: 0x5b8
	// Line 356, Address: 0x34bf60, Func Offset: 0x5c0
	// Line 357, Address: 0x34bf70, Func Offset: 0x5d0
	// Line 358, Address: 0x34bf88, Func Offset: 0x5e8
	// Line 360, Address: 0x34c040, Func Offset: 0x6a0
	// Line 364, Address: 0x34c048, Func Offset: 0x6a8
	// Line 365, Address: 0x34c060, Func Offset: 0x6c0
	// Line 366, Address: 0x34c070, Func Offset: 0x6d0
	// Line 368, Address: 0x34c078, Func Offset: 0x6d8
	// Line 371, Address: 0x34c090, Func Offset: 0x6f0
	// Line 373, Address: 0x34c098, Func Offset: 0x6f8
	// Func End, Address: 0x34c0b0, Func Offset: 0x710
}

// FastPipeAtomicCB__FP8RpAtomicPv
// Start address: 0x34c0b0
RpAtomic* FastPipeAtomicCB(RpAtomic* atomic)
{
	// Line 219, Address: 0x34c0b0, Func Offset: 0
	// Func End, Address: 0x34c0b8, Func Offset: 0x8
}

// iCSFileClose__FP9xCutscene
// Start address: 0x34c0c0
void iCSFileClose(xCutscene* csn)
{
	// Line 202, Address: 0x34c0c0, Func Offset: 0
	// Line 203, Address: 0x34c0cc, Func Offset: 0xc
	// Line 204, Address: 0x34c0d4, Func Offset: 0x14
	// Line 205, Address: 0x34c0d8, Func Offset: 0x18
	// Line 206, Address: 0x34c0e4, Func Offset: 0x24
	// Line 207, Address: 0x34c0e8, Func Offset: 0x28
	// Func End, Address: 0x34c0f8, Func Offset: 0x38
}

// iCSFileAsyncRead__FP9xCutscenePvUi
// Start address: 0x34c100
void iCSFileAsyncRead(xCutscene* csn, void* dest, uint32 size)
{
	uint32* tp;
	uint32 i;
	// Line 176, Address: 0x34c100, Func Offset: 0
	// Line 178, Address: 0x34c10c, Func Offset: 0xc
	// Line 176, Address: 0x34c110, Func Offset: 0x10
	// Line 180, Address: 0x34c114, Func Offset: 0x14
	// Line 181, Address: 0x34c138, Func Offset: 0x38
	// Line 182, Address: 0x34c188, Func Offset: 0x88
	// Line 181, Address: 0x34c18c, Func Offset: 0x8c
	// Line 182, Address: 0x34c190, Func Offset: 0x90
	// Line 181, Address: 0x34c194, Func Offset: 0x94
	// Line 182, Address: 0x34c198, Func Offset: 0x98
	// Line 191, Address: 0x34c1a0, Func Offset: 0xa0
	// Line 193, Address: 0x34c1b8, Func Offset: 0xb8
	// Func End, Address: 0x34c1c8, Func Offset: 0xc8
}

// iCSFileOpen__FP9xCutscene
// Start address: 0x34c1d0
uint32 iCSFileOpen(xCutscene* csn)
{
	uint32 headerskip;
	st_PKR_ASSET_TOCINFO ainfo;
	int8* filename;
	// Line 137, Address: 0x34c1d0, Func Offset: 0
	// Line 139, Address: 0x34c1d4, Func Offset: 0x4
	// Line 137, Address: 0x34c1d8, Func Offset: 0x8
	// Line 142, Address: 0x34c1dc, Func Offset: 0xc
	// Line 137, Address: 0x34c1e0, Func Offset: 0x10
	// Line 139, Address: 0x34c1f0, Func Offset: 0x20
	// Line 142, Address: 0x34c1f4, Func Offset: 0x24
	// Line 139, Address: 0x34c1f8, Func Offset: 0x28
	// Line 142, Address: 0x34c1fc, Func Offset: 0x2c
	// Line 143, Address: 0x34c20c, Func Offset: 0x3c
	// Line 144, Address: 0x34c214, Func Offset: 0x44
	// Line 146, Address: 0x34c218, Func Offset: 0x48
	// Line 147, Address: 0x34c224, Func Offset: 0x54
	// Line 148, Address: 0x34c23c, Func Offset: 0x6c
	// Line 149, Address: 0x34c254, Func Offset: 0x84
	// Line 150, Address: 0x34c258, Func Offset: 0x88
	// Line 151, Address: 0x34c264, Func Offset: 0x94
	// Line 152, Address: 0x34c268, Func Offset: 0x98
	// Line 154, Address: 0x34c270, Func Offset: 0xa0
	// Func End, Address: 0x34c284, Func Offset: 0xb4
}

// iCSAsyncReadCB__FP9tag_xFile
// Start address: 0x34c290
void iCSAsyncReadCB()
{
	// Line 130, Address: 0x34c290, Func Offset: 0
	// Line 131, Address: 0x34c294, Func Offset: 0x4
	// Line 130, Address: 0x34c298, Func Offset: 0x8
	// Line 131, Address: 0x34c29c, Func Offset: 0xc
	// Line 132, Address: 0x34c2a0, Func Offset: 0x10
	// Func End, Address: 0x34c2a8, Func Offset: 0x18
}

// iCSSoundCutsceneCB__FUib
// Start address: 0x34c2b0
void iCSSoundCutsceneCB(uint32 id, uint8 first)
{
	void* data;
	// Line 111, Address: 0x34c2b0, Func Offset: 0
	// Line 114, Address: 0x34c2b4, Func Offset: 0x4
	// Line 111, Address: 0x34c2b8, Func Offset: 0x8
	// Line 113, Address: 0x34c2bc, Func Offset: 0xc
	// Line 111, Address: 0x34c2c0, Func Offset: 0x10
	// Line 114, Address: 0x34c2c4, Func Offset: 0x14
	// Line 111, Address: 0x34c2c8, Func Offset: 0x18
	// Line 114, Address: 0x34c2d4, Func Offset: 0x24
	// Line 113, Address: 0x34c2d8, Func Offset: 0x28
	// Line 114, Address: 0x34c2e8, Func Offset: 0x38
	// Line 115, Address: 0x34c2fc, Func Offset: 0x4c
	// Line 116, Address: 0x34c304, Func Offset: 0x54
	// Line 117, Address: 0x34c314, Func Offset: 0x64
	// Line 118, Address: 0x34c318, Func Offset: 0x68
	// Line 119, Address: 0x34c324, Func Offset: 0x74
	// Line 120, Address: 0x34c330, Func Offset: 0x80
	// Line 122, Address: 0x34c340, Func Offset: 0x90
	// Func End, Address: 0x34c358, Func Offset: 0xa8
}

// iCSSoundGetData__FP9xCutsceneUiUi
// Start address: 0x34c360
void* iCSSoundGetData(xCutscene* csn, uint32 channel, uint32 chunk)
{
	void* retdata;
	xCutsceneData* data;
	uint32 dataIndex;
	uint32 numData;
	uint32 channelIndex;
	// Line 52, Address: 0x34c360, Func Offset: 0
	// Line 54, Address: 0x34c37c, Func Offset: 0x1c
	// Line 55, Address: 0x34c380, Func Offset: 0x20
	// Line 57, Address: 0x34c38c, Func Offset: 0x2c
	// Line 56, Address: 0x34c390, Func Offset: 0x30
	// Line 67, Address: 0x34c394, Func Offset: 0x34
	// Line 71, Address: 0x34c398, Func Offset: 0x38
	// Line 69, Address: 0x34c39c, Func Offset: 0x3c
	// Line 71, Address: 0x34c3a0, Func Offset: 0x40
	// Line 89, Address: 0x34c3a8, Func Offset: 0x48
	// Line 72, Address: 0x34c3ac, Func Offset: 0x4c
	// Line 75, Address: 0x34c3bc, Func Offset: 0x5c
	// Line 77, Address: 0x34c3c4, Func Offset: 0x64
	// Line 81, Address: 0x34c3c8, Func Offset: 0x68
	// Line 84, Address: 0x34c3d0, Func Offset: 0x70
	// Line 87, Address: 0x34c3d8, Func Offset: 0x78
	// Line 88, Address: 0x34c3dc, Func Offset: 0x7c
	// Line 89, Address: 0x34c3e0, Func Offset: 0x80
	// Line 90, Address: 0x34c3e4, Func Offset: 0x84
	// Line 91, Address: 0x34c3e8, Func Offset: 0x88
	// Line 89, Address: 0x34c3ec, Func Offset: 0x8c
	// Line 91, Address: 0x34c3f8, Func Offset: 0x98
	// Line 94, Address: 0x34c400, Func Offset: 0xa0
	// Line 96, Address: 0x34c408, Func Offset: 0xa8
	// Line 105, Address: 0x34c410, Func Offset: 0xb0
	// Line 106, Address: 0x34c414, Func Offset: 0xb4
	// Line 107, Address: 0x34c42c, Func Offset: 0xcc
	// Line 108, Address: 0x34c430, Func Offset: 0xd0
	// Func End, Address: 0x34c438, Func Offset: 0xd8
}

