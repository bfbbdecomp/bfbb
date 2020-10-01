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

typedef u32(*type_0)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_1)(xAnimPlay*, xAnimState*);
typedef u32(*type_3)(RxPipelineNode*, u32, u32, void*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef s32(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_7)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef s32(*type_8)(RxNodeDefinition*);
typedef void(*type_9)(RxNodeDefinition*);
typedef u32(*type_11)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s32(*type_14)(RxPipelineNode*);
typedef void(*type_15)(RxPipelineNode*);
typedef RpAtomic*(*type_18)(RpAtomic*);
typedef s32(*type_19)(RxPipelineNode*, RxPipeline*);
typedef void(*type_20)(_reent*);
typedef void(*type_21)();
typedef void(*type_22)(xMemPool*, void*);
typedef s32(*type_33)(void*, s8*, s32);
typedef s32(*type_37)(void*, s8*, s32);
typedef void(*type_38)(xMemPool*, void*);
typedef s32(*type_42)(void*, s32, s32);
typedef void(*type_43)(RwResEntry*);
typedef s32(*type_45)(void*);
typedef void(*type_46)(s32);
typedef RwObjectHasFrame*(*type_49)(RwObjectHasFrame*);

typedef s8 type_2[128];
typedef s8 type_10[128];
typedef u32 type_12[1];
typedef s8 type_13[128];
typedef u16 type_16[3];
typedef s8 type_17[25];
typedef type_21 type_23[32];
typedef xAnimTransition* type_24[32];
typedef RwTexCoords* type_25[8];
typedef s8 type_26[0];
typedef s8 type_27[5];
typedef f32 type_28[2];
typedef u32 type_29[4];
typedef s8 type_30[26];
typedef u8 type_31[2];
typedef xAnimMultiFileEntry type_32[1];
typedef u8* type_34[30];
typedef f32 type_35[2];
typedef u32 type_36[30];
typedef s8 type_39[32];
typedef u32 type_40[2];
typedef s8 type_41[32];
typedef u32 type_44[2];
typedef RxCluster type_47[1];
typedef u8 type_48[3];
typedef u8 type_50[1];
typedef __sFILE type_51[3];
typedef s8 type_52[128];

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

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_11 Callback;
};

struct _reent
{
	s32 _errno;
	__sFILE* _stdin;
	__sFILE* _stdout;
	__sFILE* _stderr;
	s32 _inc;
	type_17 _emergency;
	s32 _current_category;
	s8* _current_locale;
	s32 __sdidinit;
	type_20 __cleanup;
	_Bigint* _result;
	s32 _result_k;
	_Bigint* _p5s;
	_Bigint** _freelist;
	s32 _cvtlen;
	s8* _cvtbuf;
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
	type_25 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xAnimPlay
{
	xAnimPlay* Next;
	u16 NumSingle;
	u16 BoneCount;
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
	f32 s;
};

struct _Bigint
{
	_Bigint* _next;
	s32 _k;
	s32 _maxwds;
	s32 _sign;
	s32 _wds;
	type_12 _x;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_32 Files;
};

struct xAnimFile
{
	xAnimFile* Next;
	s8* Name;
	u32 ID;
	u32 FileFlags;
	f32 Duration;
	f32 TimeOffset;
	u16 BoneCount;
	type_31 NumAnims;
	void** RawData;
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

struct RxPipelineNodeTopSortData
{
	u32 numIns;
	u32 numInsVisited;
	rxReq* req;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_28 BilinearLerp;
	xAnimEffect* Effect;
	u32 ActiveCount;
	f32 LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	f32 BlendFactor;
	u32 pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	u32 size;
	rxHeapFreeBlock* freeEntry;
	type_29 pad;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct __sFILE
{
	u8* _p;
	s32 _r;
	s32 _w;
	s16 _flags;
	s16 _file;
	__sbuf _bf;
	s32 _lbfsize;
	void* _cookie;
	type_33 _read;
	type_37 _write;
	type_42 _seek;
	type_45 _close;
	__sbuf _ub;
	u8* _up;
	s32 _ur;
	type_48 _ubuf;
	type_50 _nbuf;
	__sbuf _lb;
	s32 _blksize;
	s32 _offset;
	_reent* _data;
};

struct xAnimState
{
	xAnimState* Next;
	s8* Name;
	u32 ID;
	u32 Flags;
	u32 UserFlags;
	f32 Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	f32* BoneBlend;
	f32* TimeSnap;
	f32 FadeRecip;
	u16* FadeOffset;
	void* CallbackData;
	xAnimMultiFile* MultiFile;
	type_1 BeforeEnter;
	type_4 StateCallback;
	type_7 BeforeAnimMatrices;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xAnimTable
{
	xAnimTable* Next;
	s8* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	u32 AnimIndex;
	u32 MorphIndex;
	u32 UserFlags;
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

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	u32 PipeFlags;
	f32 RedMultiplier;
	f32 GreenMultiplier;
	f32 BlueMultiplier;
	f32 Alpha;
	f32 FadeStart;
	f32 FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	u16 Flags;
	u8 BoneCount;
	u8 BoneIndex;
	u8* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	u32 modelID;
	u32 shadowID;
	RpAtomic* shadowmapAtomic;
	_class_3 anim_coll;
};

struct RpTriangle
{
	type_16 vertIndex;
	s16 matIndex;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_0 Conditional;
	type_0 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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

struct RwResEntry
{
	RwLLLink link;
	s32 size;
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
	s32 _ind;
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
	u32 ID;
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
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_38 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
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
	u32 filterAddressing;
	s32 refCount;
};

struct __sbuf
{
	u8* _base;
	s32 _size;
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
	u32 Count;
};

struct _class_1
{
	u32 _unused_rand;
	s8* _strtok_last;
	type_30 _asctime_buf;
	tm _localtime_buf;
	s32 _gamma_signgam;
	u64 _rand_next;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
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
	f32 radius;
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

struct _class_3
{
	xVec3* verts;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_47 clusters;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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
	s32 _niobs;
	__sFILE* _iobs;
};

struct RwLinkList
{
	RwLLLink link;
};

struct tm
{
	s32 tm_sec;
	s32 tm_min;
	s32 tm_hour;
	s32 tm_mday;
	s32 tm_mon;
	s32 tm_year;
	s32 tm_wday;
	s32 tm_yday;
	s32 tm_isdst;
};

xMemPool sxAnimTempTranPool;
u32 gxAnimUseGrowAlloc;
type_22 xAnimPoolCB;
u32 gActiveHeap;
u8* giAnimScratch;
_reent* _impure_ptr;
type_26 _ctype_;

void xAnimPoolFree(xAnimPlay* play);
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table, xModelInstance* modelInst);
void xAnimPoolInit(xMemPool* pool, u32 count, u32 singles, u32 blendFlags, u32 effectMax);
void xAnimPoolCB(xMemPool* pool, void* data);
void xAnimPlayEval(xAnimPlay* play);
void xAnimPlayUpdate(xAnimPlay* play, f32 timeDelta);
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition);
void xAnimPlayChooseTransition(xAnimPlay* play);
void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst);
void SingleUpdate(xAnimSingle* single, f32 timeDelta);
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, f32 startTime);
void EffectSingleStop(xAnimSingle* single);
void EffectSingleLoop(xAnimSingle* single);
void EffectSingleRun(xAnimSingle* single);
void EffectSingleDuration(xAnimSingle* single);
void EffectSingleStart(xAnimSingle* single);
xAnimState* xAnimTableGetState(xAnimTable* table, s8* name);
xAnimState* xAnimTableGetStateID(xAnimTable* table, u32 ID);
xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, u32 stateID, u32 subStateID, u32 subStateCount);
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, s8* states);
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, s8* source, s8* dest, type_0 conditional, type_0 callback, u32 flags, u32 userFlags, f32 srcTime, f32 destTime, u16 priority, u16 queuePriority, f32 blendRecip, u16* blendOffset);
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, s8* source);
void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, s8* source, s8* dest);
xAnimState* xAnimTableNewState(xAnimTable* table, s8* name, u32 flags, u32 userFlags, f32 speed, f32* boneBlend, f32* timeSnap, f32 fadeRecip, u16* fadeOffset, void* callbackData, type_1 beforeEnter, type_4 stateCallback, type_7 beforeAnimMatrices);
void xAnimDefaultBeforeEnter(xAnimState* state);
xAnimTable* xAnimTableNew(s8* name, xAnimTable** linkedList, u32 userFlags);
xAnimEffect* xAnimStateNewEffect(xAnimState* state, u32 flags, f32 startTime, f32 endTime, type_11 callback, u32 userDataSize);
void xAnimFileEval(xAnimFile* data, f32 time, f32* bilinear, u32 flags, xVec3* tran, xQuat* quat);
void xAnimFileSetTime(xAnimFile* data, f32 duration, f32 timeOffset);
xAnimFile* xAnimFileNew(void* rawData, s8* name, u32 flags, xAnimFile** linkedList);
xAnimFile* xAnimFileNewBilinear(void** rawData, s8* name, u32 flags, xAnimFile** linkedList, u32 numX, u32 numY);
void xAnimTempTransitionInit(u32 count);
void xAnimInit();
u8 _xCheckAnimNameInner(s8* name, s8* pattern, s32 patternSize, s8* extra, s32* nameOut, s32* extraOut);

// xAnimPoolFree__FP9xAnimPlay
// Start address: 0x210870
void xAnimPoolFree(xAnimPlay* play)
{
	u32 i;
}

// xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
// Start address: 0x210910
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	xAnimPlay* play;
}

// xAnimPoolInit__FP8xMemPoolUiUiUiUi
// Start address: 0x210970
void xAnimPoolInit(xMemPool* pool, u32 count, u32 singles, u32 blendFlags, u32 effectMax)
{
	u32 size;
	u32 i;
	void* buffer;
	xAnimPlay* play;
	xAnimSingle* currsingle;
	xAnimActiveEffect* curract;
}

// xAnimPoolCB__FP8xMemPoolPv
// Start address: 0x210be0
void xAnimPoolCB(xMemPool* pool, void* data)
{
	s32 i;
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
	u32 i;
	u32 bone;
	xQuat* quatresult;
	xVec3* tranresult;
	xQuat* quatblend;
	xVec3* tranblend;
	xAnimSingle* si;
	f32 blendF;
	f32 blendR;
	u16* blendO;
}

// xAnimPlayUpdate__FP9xAnimPlayf
// Start address: 0x2111c0
void xAnimPlayUpdate(xAnimPlay* play, f32 timeDelta)
{
	u32 i;
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
	u32 i;
	void* object;
	xAnimTransition** found;
	xAnimTransitionList* curr;
}

// xAnimPlaySetup__FP9xAnimPlayPvP10xAnimTableP14xModelInstance
// Start address: 0x2116e0
void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	s32 i;
}

// SingleUpdate__FP11xAnimSinglef
// Start address: 0x2117c0
void SingleUpdate(xAnimSingle* single, f32 timeDelta)
{
	u32 foundBlendstop;
	u32 firstStep;
	xAnimTransition* foundTransition;
	xAnimSingle* bl;
	f32 tranDelta;
	f32 blendDelta;
	f32 singleTime;
	void* object;
	f32 duration;
	f32 timeCmp;
	f32 timeCmp;
	xAnimTransitionList* curr;
	f32 recip;
}

// xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef
// Start address: 0x212050
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, f32 startTime)
{
}

// EffectSingleStop__FP11xAnimSingle
// Start address: 0x212160
void EffectSingleStop(xAnimSingle* single)
{
	u32 i;
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
}

// EffectSingleLoop__FP11xAnimSingle
// Start address: 0x2122c0
void EffectSingleLoop(xAnimSingle* single)
{
	xAnimActiveEffect* alist;
	u32 index;
	u32 count;
	xAnimEffect* effect;
}

// EffectSingleRun__FP11xAnimSingle
// Start address: 0x212400
void EffectSingleRun(xAnimSingle* single)
{
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	f32 time;
	u32 flags;
}

// EffectSingleDuration__FP11xAnimSingle
// Start address: 0x212610
void EffectSingleDuration(xAnimSingle* single)
{
	f32 time;
	xAnimActiveEffect* alist;
	u32 index;
	u32 count;
}

// EffectSingleStart__FP11xAnimSingle
// Start address: 0x212750
void EffectSingleStart(xAnimSingle* single)
{
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	f32 time;
	u32 flags;
}

// xAnimTableGetState__FP10xAnimTablePCc
// Start address: 0x2129a0
xAnimState* xAnimTableGetState(xAnimTable* table, s8* name)
{
}

// xAnimTableGetStateID__FP10xAnimTableUi
// Start address: 0x212a10
xAnimState* xAnimTableGetStateID(xAnimTable* table, u32 ID)
{
	xAnimState* curr;
}

// xAnimTableAddFileID__FP10xAnimTableP9xAnimFileUiUiUi
// Start address: 0x212a60
xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, u32 stateID, u32 subStateID, u32 subStateCount)
{
}

// xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
// Start address: 0x212bd0
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, s8* states)
{
	u8* buffer;
	s8* stateName;
}

// xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
// Start address: 0x212c70
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, s8* source, s8* dest, type_0 conditional, type_0 callback, u32 flags, u32 userFlags, f32 srcTime, f32 destTime, u16 priority, u16 queuePriority, f32 blendRecip, u16* blendOffset)
{
	xAnimTransition* tran;
	u8 isComplex;
	s32 i;
}

// xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCc
// Start address: 0x212fb0
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, s8* source)
{
}

// _xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCcPCc
// Start address: 0x212fc0
void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, s8* source, s8* dest)
{
	u8* buffer;
	xAnimState** stateList;
	u32 i;
	u32 stateCount;
	u32 allocCount;
	s8* stateName;
	xAnimTransitionList* tlist;
	type_24 substTransitionList;
	u32 substTransitionCount;
	u8 hasSubst;
	s32 i;
	u8 isComplex;
	s8* COMPLEX_PATTERNS;
	s8* search;
	xAnimState* state;
	type_52 extra;
	type_2 tempName;
	s8* tempIterator;
	s8* extraIterator;
	u8 allowMissingState;
	s32 i;
	u32 extraIteratorLength;
	xAnimTransition* duplicatedTransition;
	xAnimTransitionList* curr;
}

// xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
// Start address: 0x213820
xAnimState* xAnimTableNewState(xAnimTable* table, s8* name, u32 flags, u32 userFlags, f32 speed, f32* boneBlend, f32* timeSnap, f32 fadeRecip, u16* fadeOffset, void* callbackData, type_1 beforeEnter, type_4 stateCallback, type_7 beforeAnimMatrices)
{
	xAnimState* state;
}

// xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState
// Start address: 0x213a90
void xAnimDefaultBeforeEnter(xAnimState* state)
{
	u32 entry;
}

// xAnimTableNew__FPCcPP10xAnimTableUi
// Start address: 0x213af0
xAnimTable* xAnimTableNew(s8* name, xAnimTable** linkedList, u32 userFlags)
{
	xAnimTable* table;
}

// xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
// Start address: 0x213b70
xAnimEffect* xAnimStateNewEffect(xAnimState* state, u32 flags, f32 startTime, f32 endTime, type_11 callback, u32 userDataSize)
{
	xAnimEffect* curr;
	xAnimEffect** prev;
	xAnimEffect* effect;
}

// xAnimFileEval__FP9xAnimFilefPfUiP5xVec3P5xQuatPf
// Start address: 0x213c40
void xAnimFileEval(xAnimFile* data, f32 time, f32* bilinear, u32 flags, xVec3* tran, xQuat* quat)
{
	s32 i;
	u32 numBones;
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
void xAnimFileSetTime(xAnimFile* data, f32 duration, f32 timeOffset)
{
	f32 rawDuration;
}

// xAnimFileNew__FPvPCcUiPP9xAnimFile
// Start address: 0x214350
xAnimFile* xAnimFileNew(void* rawData, s8* name, u32 flags, xAnimFile** linkedList)
{
}

// xAnimFileNewBilinear__FPPvPCcUiPP9xAnimFileUiUi
// Start address: 0x214380
xAnimFile* xAnimFileNewBilinear(void** rawData, s8* name, u32 flags, xAnimFile** linkedList, u32 numX, u32 numY)
{
	s32 i;
	xAnimFile* afile;
}

// xAnimTempTransitionInit__FUi
// Start address: 0x214650
void xAnimTempTransitionInit(u32 count)
{
}

// xAnimInit__Fv
// Start address: 0x2146c0
void xAnimInit()
{
}

// _xCheckAnimNameInner__FPCcPCciPcPiPi
// Start address: 0x2146f0
u8 _xCheckAnimNameInner(s8* name, s8* pattern, s32 patternSize, s8* extra, s32* nameOut, s32* extraOut)
{
	s8* startExtra;
	s8* initialExtra;
	s32 patternCurrent;
	s32 nameCurrent;
	s32 check;
	type_10 nextPattern;
	s32 nextPatternCount;
	u8 first;
	s32 parenCount;
	s8* IGNORE_PATTERNS;
	s32 length;
	u8 done;
	s8* current;
	s8* startPattern;
	s32 pc;
	s32 nameOut;
	s32 extraOut;
	s8* current;
	s8* positiveEnd;
	s8* negative;
	s8* negativeEnd;
	s32 nameOut;
	s32 extraOut;
	u8 matched;
}

