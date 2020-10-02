typedef struct RxHeap;
typedef struct xAnimEffect;
typedef struct _reent;
typedef struct RpGeometry;
typedef struct RwRGBA;
typedef struct xAnimTransitionList;
typedef struct RxPipelineNode;
typedef struct xAnimPlay;
typedef struct xQuat;
typedef struct _Bigint;
typedef struct xAnimMultiFile;
typedef struct xAnimFile;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimSingle;
typedef struct rxHeapBlockHeader;
typedef struct RpMeshHeader;
typedef struct xVec3;
typedef struct RxPipelineRequiresCluster;
typedef struct __sFILE;
typedef struct xAnimState;
typedef struct xAnimActiveEffect;
typedef struct xAnimTable;
typedef struct RxPipeline;
typedef struct xModelInstance;
typedef struct RpTriangle;
typedef struct RpAtomic;
typedef struct xAnimTransition;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xModelPool;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct _atexit;
typedef struct RpClump;
typedef enum RxNodeDefEditable;
typedef struct xAnimMultiFileEntry;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct xMemPool;
typedef struct RpMaterial;
typedef enum rxEmbeddedPacketState;
typedef struct RwTexture;
typedef struct __sbuf;
typedef struct xSurface;
typedef enum RxClusterForcePresent;
typedef union _class_0;
typedef struct xAnimMultiFileBase;
typedef struct _class_1;
typedef struct RxClusterDefinition;
typedef struct xModelBucket;
typedef struct RpMorphTarget;
typedef struct RwSphere;
typedef struct xLightKit;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct _class_2;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct _class_3;
typedef struct RpInterpolator;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RpMaterialList;
typedef struct RwObjectHasFrame;
typedef struct _glue;
typedef struct RwLinkList;
typedef struct tm;

typedef uint32(*type_0)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_1)(xAnimPlay*, xAnimState*);
typedef uint32(*type_3)(RxPipelineNode*, uint32, uint32, void*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef int32(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_7)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_8)(RxNodeDefinition*);
typedef void(*type_9)(RxNodeDefinition*);
typedef uint32(*type_11)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_14)(RxPipelineNode*);
typedef void(*type_15)(RxPipelineNode*);
typedef RpAtomic*(*type_18)(RpAtomic*);
typedef int32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef void(*type_20)(_reent*);
typedef void(*type_21)();
typedef void(*type_22)(xMemPool*, void*);
typedef int32(*type_33)(void*, int8*, int32);
typedef int32(*type_37)(void*, int8*, int32);
typedef void(*type_38)(xMemPool*, void*);
typedef long32(*type_42)(void*, long32, int32);
typedef void(*type_43)(RwResEntry*);
typedef int32(*type_45)(void*);
typedef void(*type_46)(int32);
typedef RwObjectHasFrame*(*type_49)(RwObjectHasFrame*);

typedef int8 type_2[128];
typedef int8 type_10[128];
typedef uint32 type_12[1];
typedef int8 type_13[128];
typedef uint16 type_16[3];
typedef int8 type_17[25];
typedef type_21 type_23[32];
typedef xAnimTransition* type_24[32];
typedef RwTexCoords* type_25[8];
typedef int8 type_26[0];
typedef int8 type_27[5];
typedef float32 type_28[2];
typedef uint32 type_29[4];
typedef int8 type_30[26];
typedef uint8 type_31[2];
typedef xAnimMultiFileEntry type_32[1];
typedef uint8* type_34[30];
typedef float32 type_35[2];
typedef uint32 type_36[30];
typedef int8 type_39[32];
typedef uint32 type_40[2];
typedef int8 type_41[32];
typedef uint32 type_44[2];
typedef RxCluster type_47[1];
typedef uint8 type_48[3];
typedef uint8 type_50[1];
typedef __sFILE type_51[3];
typedef int8 type_52[128];

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

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_11 Callback;
};

struct _reent
{
	int32 _errno;
	__sFILE* _stdin;
	__sFILE* _stdout;
	__sFILE* _stderr;
	int32 _inc;
	type_17 _emergency;
	int32 _current_category;
	int8* _current_locale;
	int32 __sdidinit;
	type_20 __cleanup;
	_Bigint* _result;
	int32 _result_k;
	_Bigint* _p5s;
	_Bigint** _freelist;
	int32 _cvtlen;
	int8* _cvtbuf;
	_class_0 _new;
	_atexit* _atexit;
	_atexit _atexit0;
	type_46* _sig_func;
	_glue __sglue;
	type_51 __sf;
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
	type_25 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xAnimPlay
{
	xAnimPlay* Next;
	uint16 NumSingle;
	uint16 BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	type_7 BeforeAnimMatrices;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct _Bigint
{
	_Bigint* _next;
	int32 _k;
	int32 _maxwds;
	int32 _sign;
	int32 _wds;
	type_12 _x;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_32 Files;
};

struct xAnimFile
{
	xAnimFile* Next;
	int8* Name;
	uint32 ID;
	uint32 FileFlags;
	float32 Duration;
	float32 TimeOffset;
	uint16 BoneCount;
	type_31 NumAnims;
	void** RawData;
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

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_28 BilinearLerp;
	xAnimEffect* Effect;
	uint32 ActiveCount;
	float32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	float32 BlendFactor;
	uint32 pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_29 pad;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct __sFILE
{
	uint8* _p;
	int32 _r;
	int32 _w;
	int16 _flags;
	int16 _file;
	__sbuf _bf;
	int32 _lbfsize;
	void* _cookie;
	type_33 _read;
	type_37 _write;
	type_42 _seek;
	type_45 _close;
	__sbuf _ub;
	uint8* _up;
	int32 _ur;
	type_48 _ubuf;
	type_50 _nbuf;
	__sbuf _lb;
	int32 _blksize;
	int32 _offset;
	_reent* _data;
};

struct xAnimState
{
	xAnimState* Next;
	int8* Name;
	uint32 ID;
	uint32 Flags;
	uint32 UserFlags;
	float32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	float32* BoneBlend;
	float32* TimeSnap;
	float32 FadeRecip;
	uint16* FadeOffset;
	void* CallbackData;
	xAnimMultiFile* MultiFile;
	type_1 BeforeEnter;
	type_4 StateCallback;
	type_7 BeforeAnimMatrices;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xAnimTable
{
	xAnimTable* Next;
	int8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	uint32 AnimIndex;
	uint32 MorphIndex;
	uint32 UserFlags;
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

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	uint32 PipeFlags;
	float32 RedMultiplier;
	float32 GreenMultiplier;
	float32 BlueMultiplier;
	float32 Alpha;
	float32 FadeStart;
	float32 FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	uint16 Flags;
	uint8 BoneCount;
	uint8 BoneIndex;
	uint8* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	uint32 modelID;
	uint32 shadowID;
	RpAtomic* shadowmapAtomic;
	_class_3 anim_coll;
};

struct RpTriangle
{
	type_16 vertIndex;
	int16 matIndex;
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
	type_18 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_0 Conditional;
	type_0 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_43 destroyNotify;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _atexit
{
	_atexit* _next;
	int32 _ind;
	type_23 _fns;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_5 callback;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_38 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_39 name;
	type_41 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct __sbuf
{
	uint8* _base;
	int32 _size;
};

struct xSurface
{
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

union _class_0
{
	_class_1 _reent;
	_class_2 _unused;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct _class_1
{
	uint32 _unused_rand;
	int8* _strtok_last;
	type_30 _asctime_buf;
	tm _localtime_buf;
	int32 _gamma_signgam;
	uint64 _rand_next;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct xLightKit
{
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

struct _class_2
{
	type_34 _nextf;
	type_36 _nmalloc;
};

struct RxNodeMethods
{
	type_6 nodeBody;
	type_8 nodeInit;
	type_9 nodeTerm;
	type_14 pipelineNodeInit;
	type_15 pipelineNodeTerm;
	type_19 pipelineNodeConfig;
	type_3 configMsgHandler;
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

struct _class_3
{
	xVec3* verts;
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
	type_47 clusters;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_49 sync;
};

struct _glue
{
	_glue* _next;
	int32 _niobs;
	__sFILE* _iobs;
};

struct RwLinkList
{
	RwLLLink link;
};

struct tm
{
	int32 tm_sec;
	int32 tm_min;
	int32 tm_hour;
	int32 tm_mday;
	int32 tm_mon;
	int32 tm_year;
	int32 tm_wday;
	int32 tm_yday;
	int32 tm_isdst;
};

xMemPool sxAnimTempTranPool;
uint32 gxAnimUseGrowAlloc;
type_22 xAnimPoolCB;
uint32 gActiveHeap;
uint8* giAnimScratch;
_reent* _impure_ptr;
type_26 _ctype_;

void xAnimPoolFree(xAnimPlay* play);
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table, xModelInstance* modelInst);
void xAnimPoolInit(xMemPool* pool, uint32 count, uint32 singles, uint32 blendFlags, uint32 effectMax);
void xAnimPoolCB(xMemPool* pool, void* data);
void xAnimPlayEval(xAnimPlay* play);
void xAnimPlayUpdate(xAnimPlay* play, float32 timeDelta);
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition);
void xAnimPlayChooseTransition(xAnimPlay* play);
void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst);
void SingleUpdate(xAnimSingle* single, float32 timeDelta);
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, float32 startTime);
void EffectSingleStop(xAnimSingle* single);
void EffectSingleLoop(xAnimSingle* single);
void EffectSingleRun(xAnimSingle* single);
void EffectSingleDuration(xAnimSingle* single);
void EffectSingleStart(xAnimSingle* single);
xAnimState* xAnimTableGetState(xAnimTable* table, int8* name);
xAnimState* xAnimTableGetStateID(xAnimTable* table, uint32 ID);
xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, uint32 stateID, uint32 subStateID, uint32 subStateCount);
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, int8* states);
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, int8* source, int8* dest, type_0 conditional, type_0 callback, uint32 flags, uint32 userFlags, float32 srcTime, float32 destTime, uint16 priority, uint16 queuePriority, float32 blendRecip, uint16* blendOffset);
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source);
void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source, int8* dest);
xAnimState* xAnimTableNewState(xAnimTable* table, int8* name, uint32 flags, uint32 userFlags, float32 speed, float32* boneBlend, float32* timeSnap, float32 fadeRecip, uint16* fadeOffset, void* callbackData, type_1 beforeEnter, type_4 stateCallback, type_7 beforeAnimMatrices);
void xAnimDefaultBeforeEnter(xAnimState* state);
xAnimTable* xAnimTableNew(int8* name, xAnimTable** linkedList, uint32 userFlags);
xAnimEffect* xAnimStateNewEffect(xAnimState* state, uint32 flags, float32 startTime, float32 endTime, type_11 callback, uint32 userDataSize);
void xAnimFileEval(xAnimFile* data, float32 time, float32* bilinear, uint32 flags, xVec3* tran, xQuat* quat);
void xAnimFileSetTime(xAnimFile* data, float32 duration, float32 timeOffset);
xAnimFile* xAnimFileNew(void* rawData, int8* name, uint32 flags, xAnimFile** linkedList);
xAnimFile* xAnimFileNewBilinear(void** rawData, int8* name, uint32 flags, xAnimFile** linkedList, uint32 numX, uint32 numY);
void xAnimTempTransitionInit(uint32 count);
void xAnimInit();
uint8 _xCheckAnimNameInner(int8* name, int8* pattern, int32 patternSize, int8* extra, int32* nameOut, int32* extraOut);

// xAnimPoolFree__FP9xAnimPlay
// Start address: 0x210870
void xAnimPoolFree(xAnimPlay* play)
{
	uint32 i;
}

// xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
// Start address: 0x210910
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	xAnimPlay* play;
}

// xAnimPoolInit__FP8xMemPoolUiUiUiUi
// Start address: 0x210970
void xAnimPoolInit(xMemPool* pool, uint32 count, uint32 singles, uint32 blendFlags, uint32 effectMax)
{
	uint32 size;
	uint32 i;
	void* buffer;
	xAnimPlay* play;
	xAnimSingle* currsingle;
	xAnimActiveEffect* curract;
}

// xAnimPoolCB__FP8xMemPoolPv
// Start address: 0x210be0
void xAnimPoolCB(xMemPool* pool, void* data)
{
	int32 i;
	xAnimPlay* clone;
	xAnimPlay* play;
	xAnimSingle* clonesingle;
	xAnimSingle* currsingle;
	xAnimActiveEffect* curract;
}

// xAnimPlayEval__FP9xAnimPlay
// Start address: 0x210d10
void xAnimPlayEval(xAnimPlay* play)
{
	uint32 i;
	uint32 bone;
	xQuat* quatresult;
	xVec3* tranresult;
	xQuat* quatblend;
	xVec3* tranblend;
	xAnimSingle* si;
	float32 blendF;
	float32 blendR;
	uint16* blendO;
}

// xAnimPlayUpdate__FP9xAnimPlayf
// Start address: 0x2111c0
void xAnimPlayUpdate(xAnimPlay* play, float32 timeDelta)
{
	uint32 i;
	xAnimSingle* single;
}

// xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
// Start address: 0x211260
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition)
{
	xAnimSingle* single;
	xAnimSingle* bl;
}

// xAnimPlayChooseTransition__FP9xAnimPlay
// Start address: 0x211530
void xAnimPlayChooseTransition(xAnimPlay* play)
{
	uint32 i;
	void* object;
	xAnimTransition** found;
	xAnimTransitionList* curr;
}

// xAnimPlaySetup__FP9xAnimPlayPvP10xAnimTableP14xModelInstance
// Start address: 0x2116e0
void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	int32 i;
}

// SingleUpdate__FP11xAnimSinglef
// Start address: 0x2117c0
void SingleUpdate(xAnimSingle* single, float32 timeDelta)
{
	uint32 foundBlendstop;
	uint32 firstStep;
	xAnimTransition* foundTransition;
	xAnimSingle* bl;
	float32 tranDelta;
	float32 blendDelta;
	float32 singleTime;
	void* object;
	float32 duration;
	float32 timeCmp;
	float32 timeCmp;
	xAnimTransitionList* curr;
	float32 recip;
}

// xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef
// Start address: 0x212050
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, float32 startTime)
{
}

// EffectSingleStop__FP11xAnimSingle
// Start address: 0x212160
void EffectSingleStop(xAnimSingle* single)
{
	uint32 i;
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
}

// EffectSingleLoop__FP11xAnimSingle
// Start address: 0x2122c0
void EffectSingleLoop(xAnimSingle* single)
{
	xAnimActiveEffect* alist;
	uint32 index;
	uint32 count;
	xAnimEffect* effect;
}

// EffectSingleRun__FP11xAnimSingle
// Start address: 0x212400
void EffectSingleRun(xAnimSingle* single)
{
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	float32 time;
	uint32 flags;
}

// EffectSingleDuration__FP11xAnimSingle
// Start address: 0x212610
void EffectSingleDuration(xAnimSingle* single)
{
	float32 time;
	xAnimActiveEffect* alist;
	uint32 index;
	uint32 count;
}

// EffectSingleStart__FP11xAnimSingle
// Start address: 0x212750
void EffectSingleStart(xAnimSingle* single)
{
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	float32 time;
	uint32 flags;
}

// xAnimTableGetState__FP10xAnimTablePCc
// Start address: 0x2129a0
xAnimState* xAnimTableGetState(xAnimTable* table, int8* name)
{
}

// xAnimTableGetStateID__FP10xAnimTableUi
// Start address: 0x212a10
xAnimState* xAnimTableGetStateID(xAnimTable* table, uint32 ID)
{
	xAnimState* curr;
}

// xAnimTableAddFileID__FP10xAnimTableP9xAnimFileUiUiUi
// Start address: 0x212a60
xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, uint32 stateID, uint32 subStateID, uint32 subStateCount)
{
}

// xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
// Start address: 0x212bd0
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, int8* states)
{
	uint8* buffer;
	int8* stateName;
}

// xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
// Start address: 0x212c70
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, int8* source, int8* dest, type_0 conditional, type_0 callback, uint32 flags, uint32 userFlags, float32 srcTime, float32 destTime, uint16 priority, uint16 queuePriority, float32 blendRecip, uint16* blendOffset)
{
	xAnimTransition* tran;
	uint8 isComplex;
	int32 i;
}

// xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCc
// Start address: 0x212fb0
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source)
{
}

// _xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCcPCc
// Start address: 0x212fc0
void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source, int8* dest)
{
	uint8* buffer;
	xAnimState** stateList;
	uint32 i;
	uint32 stateCount;
	uint32 allocCount;
	int8* stateName;
	xAnimTransitionList* tlist;
	type_24 substTransitionList;
	uint32 substTransitionCount;
	uint8 hasSubst;
	int32 i;
	uint8 isComplex;
	int8* COMPLEX_PATTERNS;
	int8* search;
	xAnimState* state;
	type_52 extra;
	type_2 tempName;
	int8* tempIterator;
	int8* extraIterator;
	uint8 allowMissingState;
	int32 i;
	uint32 extraIteratorLength;
	xAnimTransition* duplicatedTransition;
	xAnimTransitionList* curr;
}

// xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
// Start address: 0x213820
xAnimState* xAnimTableNewState(xAnimTable* table, int8* name, uint32 flags, uint32 userFlags, float32 speed, float32* boneBlend, float32* timeSnap, float32 fadeRecip, uint16* fadeOffset, void* callbackData, type_1 beforeEnter, type_4 stateCallback, type_7 beforeAnimMatrices)
{
	xAnimState* state;
}

// xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState
// Start address: 0x213a90
void xAnimDefaultBeforeEnter(xAnimState* state)
{
	uint32 entry;
}

// xAnimTableNew__FPCcPP10xAnimTableUi
// Start address: 0x213af0
xAnimTable* xAnimTableNew(int8* name, xAnimTable** linkedList, uint32 userFlags)
{
	xAnimTable* table;
}

// xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
// Start address: 0x213b70
xAnimEffect* xAnimStateNewEffect(xAnimState* state, uint32 flags, float32 startTime, float32 endTime, type_11 callback, uint32 userDataSize)
{
	xAnimEffect* curr;
	xAnimEffect** prev;
	xAnimEffect* effect;
}

// xAnimFileEval__FP9xAnimFilefPfUiP5xVec3P5xQuatPf
// Start address: 0x213c40
void xAnimFileEval(xAnimFile* data, float32 time, float32* bilinear, uint32 flags, xVec3* tran, xQuat* quat)
{
	int32 i;
	uint32 numBones;
	type_35 bilerp;
	type_40 biindex;
	type_44 biplus;
	xQuat* q0;
	xVec3* t0;
	xQuat* q1;
	xVec3* t1;
}

// xAnimFileSetTime__FP9xAnimFileff
// Start address: 0x214290
void xAnimFileSetTime(xAnimFile* data, float32 duration, float32 timeOffset)
{
	float32 rawDuration;
}

// xAnimFileNew__FPvPCcUiPP9xAnimFile
// Start address: 0x214350
xAnimFile* xAnimFileNew(void* rawData, int8* name, uint32 flags, xAnimFile** linkedList)
{
}

// xAnimFileNewBilinear__FPPvPCcUiPP9xAnimFileUiUi
// Start address: 0x214380
xAnimFile* xAnimFileNewBilinear(void** rawData, int8* name, uint32 flags, xAnimFile** linkedList, uint32 numX, uint32 numY)
{
	int32 i;
	xAnimFile* afile;
}

// xAnimTempTransitionInit__FUi
// Start address: 0x214650
void xAnimTempTransitionInit(uint32 count)
{
}

// xAnimInit__Fv
// Start address: 0x2146c0
void xAnimInit()
{
}

// _xCheckAnimNameInner__FPCcPCciPcPiPi
// Start address: 0x2146f0
uint8 _xCheckAnimNameInner(int8* name, int8* pattern, int32 patternSize, int8* extra, int32* nameOut, int32* extraOut)
{
	int8* startExtra;
	int8* initialExtra;
	int32 patternCurrent;
	int32 nameCurrent;
	int32 check;
	type_10 nextPattern;
	int32 nextPatternCount;
	uint8 first;
	int32 parenCount;
	int8* IGNORE_PATTERNS;
	int32 length;
	uint8 done;
	int8* current;
	int8* startPattern;
	int32 pc;
	int32 nameOut;
	int32 extraOut;
	int8* current;
	int8* positiveEnd;
	int8* negative;
	int8* negativeEnd;
	int32 nameOut;
	int32 extraOut;
	uint8 matched;
}

