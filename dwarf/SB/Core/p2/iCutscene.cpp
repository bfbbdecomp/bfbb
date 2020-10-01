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
	type_3 sync;
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
	type_9 relname;
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
	type_25 SndChannelReq;
	type_27 SndAssetID;
	type_29 SndHandle;
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
	type_14 callback;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_23 pad;
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
	type_16 SoundLeft;
	type_17 SoundRight;
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
	type_24 texCoords;
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
	type_19 renderCallBack;
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
	type_18 vertIndex;
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
	type_20 readXForm;
	type_22 writeXForm;
	type_0 assetLoaded;
	type_2 makeData;
	type_5 cleanup;
	type_6 assetUnloaded;
	type_7 writePeek;
};

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_34 destroyNotify;
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
	type_31 name;
	type_33 mask;
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
	type_11 nodeBody;
	type_12 nodeInit;
	type_15 nodeTerm;
	type_1 pipelineNodeInit;
	type_4 pipelineNodeTerm;
	type_8 pipelineNodeConfig;
	type_10 configMsgHandler;
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
	type_36 clusters;
};

struct tag_iFile
{
	uint32 flags;
	type_35 path;
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

type_28 buffer;
type_30 buffer;
type_32 iCSAsyncReadCB;
type_21 iCSSoundCutsceneCB;
type_13 FastPipeAtomicCB;
type_26 ourGlobals;
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
}

// FastPipeAtomicCB__FP8RpAtomicPv
// Start address: 0x34c0b0
RpAtomic* FastPipeAtomicCB(RpAtomic* atomic)
{
}

// iCSFileClose__FP9xCutscene
// Start address: 0x34c0c0
void iCSFileClose(xCutscene* csn)
{
}

// iCSFileAsyncRead__FP9xCutscenePvUi
// Start address: 0x34c100
void iCSFileAsyncRead(xCutscene* csn, void* dest, uint32 size)
{
	uint32* tp;
	uint32 i;
}

// iCSFileOpen__FP9xCutscene
// Start address: 0x34c1d0
uint32 iCSFileOpen(xCutscene* csn)
{
	uint32 headerskip;
	st_PKR_ASSET_TOCINFO ainfo;
	int8* filename;
}

// iCSAsyncReadCB__FP9tag_xFile
// Start address: 0x34c290
void iCSAsyncReadCB()
{
}

// iCSSoundCutsceneCB__FUib
// Start address: 0x34c2b0
void iCSSoundCutsceneCB(uint32 id, uint8 first)
{
	void* data;
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
}

