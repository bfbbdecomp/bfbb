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

typedef s32(*type_0)(void*, u32, void*, s32);
typedef s32(*type_1)(RxPipelineNode*);
typedef void*(*type_2)(void*, u32, void*, s32*, s32*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(RxPipelineNode*);
typedef void(*type_5)(void*, u32, void*);
typedef void(*type_6)(void*, u32);
typedef void(*type_7)(void*, u32, void*, s8*);
typedef s32(*type_8)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_10)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_12)(RxNodeDefinition*);
typedef RpAtomic*(*type_13)(RpAtomic*, void*);
typedef RpClump*(*type_14)(RpClump*, void*);
typedef void(*type_15)(RxNodeDefinition*);
typedef RpAtomic*(*type_19)(RpAtomic*);
typedef void*(*type_20)(void*, u32, void*, u32, u32*);
typedef void(*type_21)(u32, u8);
typedef void*(*type_22)(void*, u32, void*, void*, u32, u32*);
typedef void(*type_32)(tag_xFile*);
typedef void(*type_34)(RwResEntry*);

typedef s8 type_9[32];
typedef s8 type_16[16];
typedef s8 type_17[16];
typedef u16 type_18[3];
typedef u32 type_23[4];
typedef RwTexCoords* type_24[8];
typedef u32 type_25[2];
typedef u32 type_26[4096];
typedef u32 type_27[2];
typedef s8 type_28[16];
typedef u32 type_29[2];
typedef s8 type_30[16];
typedef s8 type_31[32];
typedef s8 type_33[32];
typedef s8 type_35[128];
typedef RxCluster type_36[1];

struct RpInterpolator
{
	s32 flags;
	s16 startMorphTarget;
	s16 endMorphTarget;
	f32 time;
	f32 recipTime;
	f32 position;
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
	u32* TimeChunkOffs;
	u32* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	u32 Waiting;
	u32 BadReadPause;
	f32 BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	f32 Time;
	f32 CamTime;
	u32 PlayIndex;
	u32 Ready;
	s32 DataLoading;
	u32 GotData;
	u32 ShutDownWait;
	f32 PlaybackSpeed;
	u32 Opened;
	tag_xFile File;
	s32 AsyncID;
	void* MemBuf;
	void* MemCurr;
	u32 SndStarted;
	u32 SndNumChannel;
	type_25 SndChannelReq;
	type_27 SndAssetID;
	type_29 SndHandle;
	XCSNNosey* cb_nosey;
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

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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

struct xCutsceneData
{
	u32 DataType;
	u32 AssetID;
	u32 ChunkSize;
	union
	{
		u32 FileOffset;
		void* DataPtr;
	};
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
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_23 pad;
};

struct xCutsceneInfo
{
	u32 Magic;
	u32 AssetID;
	u32 NumData;
	u32 NumTime;
	u32 MaxModel;
	u32 MaxBufEven;
	u32 MaxBufOdd;
	u32 HeaderSize;
	u32 VisCount;
	u32 VisSize;
	u32 BreakCount;
	u32 pad;
	type_16 SoundLeft;
	type_17 SoundRight;
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
	type_24 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xCutsceneTime
{
	f32 StartTime;
	f32 EndTime;
	u32 NumData;
	u32 ChunkIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
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
	u16 renderFrame;
	u16 pad;
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
	f32 ambient;
	f32 specular;
	f32 diffuse;
};

struct xCutsceneBreak
{
	f32 Time;
	s32 Index;
};

struct rxReq
{
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
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

struct XCSNNosey
{
	void* userdata;
	s32 flg_nosey;
};

struct RpTriangle
{
	type_18 vertIndex;
	s16 matIndex;
};

struct st_PKR_ASSET_TOCINFO
{
	u32 aid;
	st_PACKER_ASSETTYPE* typeref;
	u32 sector;
	u32 plus_offset;
	u32 size;
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
	u32 typetag;
	u32 tflags;
	s32 typalign;
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
	s32 size;
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
	u32 filterAddressing;
	s32 refCount;
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
	type_36 clusters;
};

struct tag_iFile
{
	u32 flags;
	type_35 path;
	s32 fd;
	s32 offset;
	s32 length;
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

s32 iCSLoadStep(xCutscene* csn);
RpAtomic* FastPipeAtomicCB(RpAtomic* atomic);
void iCSFileClose(xCutscene* csn);
void iCSFileAsyncRead(xCutscene* csn, void* dest, u32 size);
u32 iCSFileOpen(xCutscene* csn);
void iCSAsyncReadCB();
void iCSSoundCutsceneCB(u32 id, u8 first);
void* iCSSoundGetData(xCutscene* csn, u32 channel, u32 chunk);

// iCSLoadStep__FP9xCutscene
// Start address: 0x34b9a0
s32 iCSLoadStep(xCutscene* csn)
{
	s32 bytes;
	XFILE_READSECTOR_STATUS cdstat;
	u32 skipAccum;
	u32 tmpSize;
	void* foundModel;
	u32 i;
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
void iCSFileAsyncRead(xCutscene* csn, void* dest, u32 size)
{
	u32* tp;
	u32 i;
}

// iCSFileOpen__FP9xCutscene
// Start address: 0x34c1d0
u32 iCSFileOpen(xCutscene* csn)
{
	u32 headerskip;
	st_PKR_ASSET_TOCINFO ainfo;
	s8* filename;
}

// iCSAsyncReadCB__FP9tag_xFile
// Start address: 0x34c290
void iCSAsyncReadCB()
{
}

// iCSSoundCutsceneCB__FUib
// Start address: 0x34c2b0
void iCSSoundCutsceneCB(u32 id, u8 first)
{
	void* data;
}

// iCSSoundGetData__FP9xCutsceneUiUi
// Start address: 0x34c360
void* iCSSoundGetData(xCutscene* csn, u32 channel, u32 chunk)
{
	void* retdata;
	xCutsceneData* data;
	u32 dataIndex;
	u32 numData;
	u32 channelIndex;
}

