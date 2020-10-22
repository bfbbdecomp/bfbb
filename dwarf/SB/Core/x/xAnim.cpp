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
typedef struct _class_0;
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
typedef void(*type_23)()[32];
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
	uint32(*Callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
};

struct _reent
{
	int32 _errno;
	__sFILE* _stdin;
	__sFILE* _stdout;
	__sFILE* _stderr;
	int32 _inc;
	int8 _emergency[25];
	int32 _current_category;
	int8* _current_locale;
	int32 __sdidinit;
	void(*__cleanup)(_reent*);
	_Bigint* _result;
	int32 _result_k;
	_Bigint* _p5s;
	_Bigint** _freelist;
	int32 _cvtlen;
	int8* _cvtbuf;
	_class_0 _new;
	_atexit* _atexit;
	_atexit _atexit0;
	void(*_sig_func)(int32);
	_glue __sglue;
	__sFILE __sf[3];
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
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint32 _x[1];
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	xAnimMultiFileEntry Files[1];
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
	uint8 NumAnims[2];
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
	float32 BilinearLerp[2];
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
	uint32 pad[4];
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
	int32(*_read)(void*, int8*, int32);
	int32(*_write)(void*, int8*, int32);
	long32(*_seek)(void*, long32, int32);
	int32(*_close)(void*);
	__sbuf _ub;
	uint8* _up;
	int32 _ur;
	uint8 _ubuf[3];
	uint8 _nbuf[1];
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
	void(*BeforeEnter)(xAnimPlay*, xAnimState*);
	void(*StateCallback)(xAnimState*, xAnimSingle*, void*);
	void(*BeforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32);
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
	uint16 vertIndex[3];
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
	RpAtomic*(*renderCallBack)(RpAtomic*);
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
	uint32(*Conditional)(xAnimTransition*, xAnimSingle*, void*);
	uint32(*Callback)(xAnimTransition*, xAnimSingle*, void*);
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
	void(*destroyNotify)(RwResEntry*);
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
	void(*_fns)()[32];
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
	void(*InitCB)(xMemPool*, void*);
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
	int8 name[32];
	int8 mask[32];
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

struct _class_0
{
	union
	{
		_class_1 _reent;
		_class_2 _unused;
	};
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct _class_1
{
	uint32 _unused_rand;
	int8* _strtok_last;
	int8 _asctime_buf[26];
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
	uint8* _nextf[30];
	uint32 _nmalloc[30];
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
	RxCluster clusters[1];
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
	RwObjectHasFrame*(*sync)(RwObjectHasFrame*);
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
void(*xAnimPoolCB)(xMemPool*, void*);
uint32 gActiveHeap;
uint8* giAnimScratch;
_reent* _impure_ptr;
int8 _ctype_[0];

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
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, int8* source, int8* dest, uint32(*conditional)(xAnimTransition*, xAnimSingle*, void*), uint32(*callback)(xAnimTransition*, xAnimSingle*, void*), uint32 flags, uint32 userFlags, float32 srcTime, float32 destTime, uint16 priority, uint16 queuePriority, float32 blendRecip, uint16* blendOffset);
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source);
void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source, int8* dest);
xAnimState* xAnimTableNewState(xAnimTable* table, int8* name, uint32 flags, uint32 userFlags, float32 speed, float32* boneBlend, float32* timeSnap, float32 fadeRecip, uint16* fadeOffset, void* callbackData, void(*beforeEnter)(xAnimPlay*, xAnimState*), void(*stateCallback)(xAnimState*, xAnimSingle*, void*), void(*beforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32));
void xAnimDefaultBeforeEnter(xAnimState* state);
xAnimTable* xAnimTableNew(int8* name, xAnimTable** linkedList, uint32 userFlags);
xAnimEffect* xAnimStateNewEffect(xAnimState* state, uint32 flags, float32 startTime, float32 endTime, uint32(*callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*), uint32 userDataSize);
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
	// Line 2162, Address: 0x210870, Func Offset: 0
	// Line 2166, Address: 0x210888, Func Offset: 0x18
	// Line 2167, Address: 0x2108a0, Func Offset: 0x30
	// Line 2168, Address: 0x2108b8, Func Offset: 0x48
	// Line 2169, Address: 0x2108c0, Func Offset: 0x50
	// Line 2171, Address: 0x2108c8, Func Offset: 0x58
	// Line 2173, Address: 0x2108e0, Func Offset: 0x70
	// Line 2174, Address: 0x2108ec, Func Offset: 0x7c
	// Func End, Address: 0x210904, Func Offset: 0x94
}

// xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
// Start address: 0x210910
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	xAnimPlay* play;
	// Line 2155, Address: 0x210910, Func Offset: 0
	// Line 2156, Address: 0x210930, Func Offset: 0x20
	// Line 2157, Address: 0x21093c, Func Offset: 0x2c
	// Line 2158, Address: 0x210950, Func Offset: 0x40
	// Line 2159, Address: 0x210954, Func Offset: 0x44
	// Func End, Address: 0x210970, Func Offset: 0x60
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
	// Line 2084, Address: 0x210970, Func Offset: 0
	// Line 2088, Address: 0x21097c, Func Offset: 0xc
	// Line 2084, Address: 0x210980, Func Offset: 0x10
	// Line 2088, Address: 0x2109b4, Func Offset: 0x44
	// Line 2096, Address: 0x2109c8, Func Offset: 0x58
	// Line 2088, Address: 0x2109d4, Func Offset: 0x64
	// Line 2096, Address: 0x2109e0, Func Offset: 0x70
	// Line 2097, Address: 0x210a84, Func Offset: 0x114
	// Line 2096, Address: 0x210a88, Func Offset: 0x118
	// Line 2097, Address: 0x210a98, Func Offset: 0x128
	// Line 2096, Address: 0x210a9c, Func Offset: 0x12c
	// Line 2097, Address: 0x210aa0, Func Offset: 0x130
	// Line 2106, Address: 0x210aa8, Func Offset: 0x138
	// Line 2103, Address: 0x210aac, Func Offset: 0x13c
	// Line 2107, Address: 0x210ab0, Func Offset: 0x140
	// Line 2108, Address: 0x210ab4, Func Offset: 0x144
	// Line 2111, Address: 0x210ab8, Func Offset: 0x148
	// Line 2108, Address: 0x210abc, Func Offset: 0x14c
	// Line 2111, Address: 0x210ac0, Func Offset: 0x150
	// Line 2112, Address: 0x210acc, Func Offset: 0x15c
	// Line 2113, Address: 0x210ae0, Func Offset: 0x170
	// Line 2114, Address: 0x210aec, Func Offset: 0x17c
	// Line 2116, Address: 0x210af0, Func Offset: 0x180
	// Line 2117, Address: 0x210af8, Func Offset: 0x188
	// Line 2119, Address: 0x210b04, Func Offset: 0x194
	// Line 2124, Address: 0x210b18, Func Offset: 0x1a8
	// Line 2126, Address: 0x210b30, Func Offset: 0x1c0
	// Line 2128, Address: 0x210b38, Func Offset: 0x1c8
	// Line 2130, Address: 0x210b40, Func Offset: 0x1d0
	// Line 2131, Address: 0x210b48, Func Offset: 0x1d8
	// Line 2133, Address: 0x210b4c, Func Offset: 0x1dc
	// Line 2134, Address: 0x210b58, Func Offset: 0x1e8
	// Line 2135, Address: 0x210b5c, Func Offset: 0x1ec
	// Line 2136, Address: 0x210b60, Func Offset: 0x1f0
	// Line 2137, Address: 0x210b64, Func Offset: 0x1f4
	// Line 2138, Address: 0x210b70, Func Offset: 0x200
	// Line 2149, Address: 0x210b88, Func Offset: 0x218
	// Line 2144, Address: 0x210b90, Func Offset: 0x220
	// Line 2149, Address: 0x210b94, Func Offset: 0x224
	// Line 2151, Address: 0x210bb4, Func Offset: 0x244
	// Func End, Address: 0x210bdc, Func Offset: 0x26c
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
	// Line 2019, Address: 0x210be0, Func Offset: 0
	// Line 2021, Address: 0x210be4, Func Offset: 0x4
	// Line 2029, Address: 0x210be8, Func Offset: 0x8
	// Line 2024, Address: 0x210bec, Func Offset: 0xc
	// Line 2025, Address: 0x210bf4, Func Offset: 0x14
	// Line 2026, Address: 0x210bfc, Func Offset: 0x1c
	// Line 2029, Address: 0x210c00, Func Offset: 0x20
	// Line 2030, Address: 0x210c10, Func Offset: 0x30
	// Line 2031, Address: 0x210c1c, Func Offset: 0x3c
	// Line 2032, Address: 0x210c30, Func Offset: 0x50
	// Line 2033, Address: 0x210c3c, Func Offset: 0x5c
	// Line 2034, Address: 0x210c40, Func Offset: 0x60
	// Line 2036, Address: 0x210c44, Func Offset: 0x64
	// Line 2037, Address: 0x210c50, Func Offset: 0x70
	// Line 2039, Address: 0x210c5c, Func Offset: 0x7c
	// Line 2044, Address: 0x210c78, Func Offset: 0x98
	// Line 2046, Address: 0x210c90, Func Offset: 0xb0
	// Line 2047, Address: 0x210c94, Func Offset: 0xb4
	// Line 2046, Address: 0x210c98, Func Offset: 0xb8
	// Line 2049, Address: 0x210c9c, Func Offset: 0xbc
	// Line 2050, Address: 0x210ca8, Func Offset: 0xc8
	// Line 2051, Address: 0x210cb0, Func Offset: 0xd0
	// Line 2052, Address: 0x210cbc, Func Offset: 0xdc
	// Line 2053, Address: 0x210cc0, Func Offset: 0xe0
	// Line 2054, Address: 0x210cc8, Func Offset: 0xe8
	// Line 2055, Address: 0x210cd0, Func Offset: 0xf0
	// Line 2056, Address: 0x210cd4, Func Offset: 0xf4
	// Line 2059, Address: 0x210cd8, Func Offset: 0xf8
	// Line 2060, Address: 0x210cdc, Func Offset: 0xfc
	// Line 2061, Address: 0x210ce8, Func Offset: 0x108
	// Line 2068, Address: 0x210d00, Func Offset: 0x120
	// Func End, Address: 0x210d08, Func Offset: 0x128
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
	// Line 1927, Address: 0x210d10, Func Offset: 0
	// Line 1933, Address: 0x210d48, Func Offset: 0x38
	// Line 1927, Address: 0x210d4c, Func Offset: 0x3c
	// Line 1933, Address: 0x210d50, Func Offset: 0x40
	// Line 1927, Address: 0x210d54, Func Offset: 0x44
	// Line 1930, Address: 0x210d58, Func Offset: 0x48
	// Line 1933, Address: 0x210d60, Func Offset: 0x50
	// Line 1935, Address: 0x210d68, Func Offset: 0x58
	// Line 1938, Address: 0x210d6c, Func Offset: 0x5c
	// Line 1935, Address: 0x210d70, Func Offset: 0x60
	// Line 1938, Address: 0x210d74, Func Offset: 0x64
	// Line 1941, Address: 0x210e40, Func Offset: 0x130
	// Line 1942, Address: 0x210e60, Func Offset: 0x150
	// Line 1943, Address: 0x210e70, Func Offset: 0x160
	// Line 1946, Address: 0x210e88, Func Offset: 0x178
	// Line 1945, Address: 0x210e8c, Func Offset: 0x17c
	// Line 1947, Address: 0x210e90, Func Offset: 0x180
	// Line 1949, Address: 0x210f4c, Func Offset: 0x23c
	// Line 1950, Address: 0x210f7c, Func Offset: 0x26c
	// Line 1953, Address: 0x210f84, Func Offset: 0x274
	// Line 1954, Address: 0x210f88, Func Offset: 0x278
	// Line 1955, Address: 0x210f8c, Func Offset: 0x27c
	// Line 1957, Address: 0x210f98, Func Offset: 0x288
	// Line 1958, Address: 0x210fa0, Func Offset: 0x290
	// Line 1959, Address: 0x210fa4, Func Offset: 0x294
	// Line 1963, Address: 0x210fa8, Func Offset: 0x298
	// Line 1966, Address: 0x210fbc, Func Offset: 0x2ac
	// Line 1970, Address: 0x210ff0, Func Offset: 0x2e0
	// Line 1974, Address: 0x211020, Func Offset: 0x310
	// Line 1971, Address: 0x211024, Func Offset: 0x314
	// Line 1974, Address: 0x211028, Func Offset: 0x318
	// Line 1971, Address: 0x21102c, Func Offset: 0x31c
	// Line 1974, Address: 0x211030, Func Offset: 0x320
	// Line 1971, Address: 0x211034, Func Offset: 0x324
	// Line 1972, Address: 0x21103c, Func Offset: 0x32c
	// Line 1973, Address: 0x21104c, Func Offset: 0x33c
	// Line 1974, Address: 0x211058, Func Offset: 0x348
	// Line 1975, Address: 0x211060, Func Offset: 0x350
	// Line 1974, Address: 0x211068, Func Offset: 0x358
	// Line 1975, Address: 0x211078, Func Offset: 0x368
	// Line 1977, Address: 0x211084, Func Offset: 0x374
	// Line 1980, Address: 0x211090, Func Offset: 0x380
	// Line 1987, Address: 0x2110dc, Func Offset: 0x3cc
	// Line 1988, Address: 0x2110fc, Func Offset: 0x3ec
	// Line 1991, Address: 0x211100, Func Offset: 0x3f0
	// Line 1992, Address: 0x211110, Func Offset: 0x400
	// Line 1995, Address: 0x21112c, Func Offset: 0x41c
	// Line 1996, Address: 0x211134, Func Offset: 0x424
	// Line 1997, Address: 0x21114c, Func Offset: 0x43c
	// Line 1998, Address: 0x211154, Func Offset: 0x444
	// Line 2001, Address: 0x21116c, Func Offset: 0x45c
	// Line 2002, Address: 0x211184, Func Offset: 0x474
	// Func End, Address: 0x2111bc, Func Offset: 0x4ac
}

// xAnimPlayUpdate__FP9xAnimPlayf
// Start address: 0x2111c0
void xAnimPlayUpdate(xAnimPlay* play, float32 timeDelta)
{
	uint32 i;
	xAnimSingle* single;
	// Line 1912, Address: 0x2111c0, Func Offset: 0
	// Line 1915, Address: 0x2111e0, Func Offset: 0x20
	// Line 1916, Address: 0x2111f8, Func Offset: 0x38
	// Line 1918, Address: 0x2111fc, Func Offset: 0x3c
	// Line 1916, Address: 0x211200, Func Offset: 0x40
	// Line 1918, Address: 0x211204, Func Offset: 0x44
	// Line 1921, Address: 0x211214, Func Offset: 0x54
	// Line 1922, Address: 0x21121c, Func Offset: 0x5c
	// Line 1923, Address: 0x211228, Func Offset: 0x68
	// Line 1924, Address: 0x211240, Func Offset: 0x80
	// Func End, Address: 0x211260, Func Offset: 0xa0
}

// xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
// Start address: 0x211260
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition)
{
	xAnimSingle* single;
	xAnimSingle* bl;
	// Line 1836, Address: 0x211260, Func Offset: 0
	// Line 1845, Address: 0x211268, Func Offset: 0x8
	// Line 1836, Address: 0x21126c, Func Offset: 0xc
	// Line 1841, Address: 0x211280, Func Offset: 0x20
	// Line 1845, Address: 0x211284, Func Offset: 0x24
	// Line 1841, Address: 0x211288, Func Offset: 0x28
	// Line 1845, Address: 0x21128c, Func Offset: 0x2c
	// Line 1841, Address: 0x211290, Func Offset: 0x30
	// Line 1842, Address: 0x2112a0, Func Offset: 0x40
	// Line 1845, Address: 0x2112a4, Func Offset: 0x44
	// Line 1849, Address: 0x2112d0, Func Offset: 0x70
	// Line 1853, Address: 0x2112d8, Func Offset: 0x78
	// Line 1854, Address: 0x2112ec, Func Offset: 0x8c
	// Line 1855, Address: 0x2112f4, Func Offset: 0x94
	// Line 1856, Address: 0x2112f8, Func Offset: 0x98
	// Line 1857, Address: 0x2112fc, Func Offset: 0x9c
	// Line 1859, Address: 0x211300, Func Offset: 0xa0
	// Line 1862, Address: 0x211328, Func Offset: 0xc8
	// Line 1863, Address: 0x211334, Func Offset: 0xd4
	// Line 1865, Address: 0x211358, Func Offset: 0xf8
	// Line 1867, Address: 0x211364, Func Offset: 0x104
	// Line 1870, Address: 0x21136c, Func Offset: 0x10c
	// Line 1879, Address: 0x2113a0, Func Offset: 0x140
	// Line 1880, Address: 0x2113b4, Func Offset: 0x154
	// Line 1884, Address: 0x2113bc, Func Offset: 0x15c
	// Line 1880, Address: 0x2113c0, Func Offset: 0x160
	// Line 1884, Address: 0x2113c4, Func Offset: 0x164
	// Line 1885, Address: 0x2113e8, Func Offset: 0x188
	// Line 1884, Address: 0x2113ec, Func Offset: 0x18c
	// Line 1885, Address: 0x2113f0, Func Offset: 0x190
	// Line 1889, Address: 0x2113f8, Func Offset: 0x198
	// Line 1899, Address: 0x2114a0, Func Offset: 0x240
	// Line 1889, Address: 0x2114a4, Func Offset: 0x244
	// Line 1892, Address: 0x2114ac, Func Offset: 0x24c
	// Line 1899, Address: 0x2114c8, Func Offset: 0x268
	// Line 1903, Address: 0x2114d8, Func Offset: 0x278
	// Line 1904, Address: 0x2114e0, Func Offset: 0x280
	// Line 1907, Address: 0x2114ec, Func Offset: 0x28c
	// Line 1908, Address: 0x2114f4, Func Offset: 0x294
	// Line 1909, Address: 0x211508, Func Offset: 0x2a8
	// Func End, Address: 0x211524, Func Offset: 0x2c4
}

// xAnimPlayChooseTransition__FP9xAnimPlay
// Start address: 0x211530
void xAnimPlayChooseTransition(xAnimPlay* play)
{
	uint32 i;
	void* object;
	xAnimTransition** found;
	xAnimTransitionList* curr;
	// Line 1798, Address: 0x211530, Func Offset: 0
	// Line 1802, Address: 0x211534, Func Offset: 0x4
	// Line 1798, Address: 0x211538, Func Offset: 0x8
	// Line 1802, Address: 0x211554, Func Offset: 0x24
	// Line 1800, Address: 0x21155c, Func Offset: 0x2c
	// Line 1801, Address: 0x211560, Func Offset: 0x30
	// Line 1802, Address: 0x211564, Func Offset: 0x34
	// Line 1805, Address: 0x211570, Func Offset: 0x40
	// Line 1806, Address: 0x211594, Func Offset: 0x64
	// Line 1807, Address: 0x21159c, Func Offset: 0x6c
	// Line 1809, Address: 0x2115a0, Func Offset: 0x70
	// Line 1810, Address: 0x2115a8, Func Offset: 0x78
	// Line 1813, Address: 0x2115c4, Func Offset: 0x94
	// Line 1819, Address: 0x2115fc, Func Offset: 0xcc
	// Line 1820, Address: 0x211618, Func Offset: 0xe8
	// Line 1821, Address: 0x21161c, Func Offset: 0xec
	// Line 1822, Address: 0x211620, Func Offset: 0xf0
	// Line 1823, Address: 0x211624, Func Offset: 0xf4
	// Line 1825, Address: 0x211630, Func Offset: 0x100
	// Line 1828, Address: 0x211648, Func Offset: 0x118
	// Line 1829, Address: 0x21165c, Func Offset: 0x12c
	// Line 1830, Address: 0x211690, Func Offset: 0x160
	// Line 1832, Address: 0x211698, Func Offset: 0x168
	// Line 1830, Address: 0x2116a0, Func Offset: 0x170
	// Line 1832, Address: 0x2116a4, Func Offset: 0x174
	// Line 1833, Address: 0x2116b0, Func Offset: 0x180
	// Func End, Address: 0x2116d4, Func Offset: 0x1a4
}

// xAnimPlaySetup__FP9xAnimPlayPvP10xAnimTableP14xModelInstance
// Start address: 0x2116e0
void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	int32 i;
	// Line 1767, Address: 0x2116e0, Func Offset: 0
	// Line 1768, Address: 0x2116e8, Func Offset: 0x8
	// Line 1769, Address: 0x2116ec, Func Offset: 0xc
	// Line 1770, Address: 0x2116f0, Func Offset: 0x10
	// Line 1773, Address: 0x2116f4, Func Offset: 0x14
	// Line 1774, Address: 0x2116f8, Func Offset: 0x18
	// Line 1778, Address: 0x211704, Func Offset: 0x24
	// Line 1779, Address: 0x211710, Func Offset: 0x30
	// Line 1783, Address: 0x211720, Func Offset: 0x40
	// Line 1785, Address: 0x211734, Func Offset: 0x54
	// Line 1788, Address: 0x211758, Func Offset: 0x78
	// Line 1789, Address: 0x211764, Func Offset: 0x84
	// Line 1790, Address: 0x21177c, Func Offset: 0x9c
	// Line 1791, Address: 0x211788, Func Offset: 0xa8
	// Line 1794, Address: 0x2117a0, Func Offset: 0xc0
	// Func End, Address: 0x2117b4, Func Offset: 0xd4
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
	// Line 1463, Address: 0x2117c0, Func Offset: 0
	// Line 1464, Address: 0x2117dc, Func Offset: 0x1c
	// Line 1463, Address: 0x2117e0, Func Offset: 0x20
	// Line 1464, Address: 0x2117e4, Func Offset: 0x24
	// Line 1463, Address: 0x2117e8, Func Offset: 0x28
	// Line 1465, Address: 0x2117ec, Func Offset: 0x2c
	// Line 1463, Address: 0x2117f0, Func Offset: 0x30
	// Line 1466, Address: 0x2117f4, Func Offset: 0x34
	// Line 1463, Address: 0x2117f8, Func Offset: 0x38
	// Line 1471, Address: 0x211810, Func Offset: 0x50
	// Line 1467, Address: 0x211814, Func Offset: 0x54
	// Line 1471, Address: 0x21181c, Func Offset: 0x5c
	// Line 1475, Address: 0x211824, Func Offset: 0x64
	// Line 1478, Address: 0x211828, Func Offset: 0x68
	// Line 1479, Address: 0x211844, Func Offset: 0x84
	// Line 1480, Address: 0x21184c, Func Offset: 0x8c
	// Line 1483, Address: 0x211850, Func Offset: 0x90
	// Line 1484, Address: 0x211858, Func Offset: 0x98
	// Line 1487, Address: 0x211868, Func Offset: 0xa8
	// Line 1489, Address: 0x21187c, Func Offset: 0xbc
	// Line 1490, Address: 0x211898, Func Offset: 0xd8
	// Line 1492, Address: 0x2118a0, Func Offset: 0xe0
	// Line 1496, Address: 0x2118ac, Func Offset: 0xec
	// Line 1497, Address: 0x2118b4, Func Offset: 0xf4
	// Line 1499, Address: 0x2118c0, Func Offset: 0x100
	// Line 1503, Address: 0x2118d4, Func Offset: 0x114
	// Line 1504, Address: 0x2118ec, Func Offset: 0x12c
	// Line 1508, Address: 0x211904, Func Offset: 0x144
	// Line 1507, Address: 0x211908, Func Offset: 0x148
	// Line 1508, Address: 0x21190c, Func Offset: 0x14c
	// Line 1510, Address: 0x211910, Func Offset: 0x150
	// Line 1508, Address: 0x211918, Func Offset: 0x158
	// Line 1509, Address: 0x211920, Func Offset: 0x160
	// Line 1510, Address: 0x211924, Func Offset: 0x164
	// Line 1512, Address: 0x211930, Func Offset: 0x170
	// Line 1516, Address: 0x211954, Func Offset: 0x194
	// Line 1515, Address: 0x211958, Func Offset: 0x198
	// Line 1516, Address: 0x21195c, Func Offset: 0x19c
	// Line 1518, Address: 0x211960, Func Offset: 0x1a0
	// Line 1516, Address: 0x211968, Func Offset: 0x1a8
	// Line 1517, Address: 0x211970, Func Offset: 0x1b0
	// Line 1518, Address: 0x211974, Func Offset: 0x1b4
	// Line 1521, Address: 0x211980, Func Offset: 0x1c0
	// Line 1525, Address: 0x211988, Func Offset: 0x1c8
	// Line 1527, Address: 0x211990, Func Offset: 0x1d0
	// Line 1526, Address: 0x211994, Func Offset: 0x1d4
	// Line 1532, Address: 0x211998, Func Offset: 0x1d8
	// Line 1535, Address: 0x2119a0, Func Offset: 0x1e0
	// Line 1546, Address: 0x2119b8, Func Offset: 0x1f8
	// Line 1535, Address: 0x2119bc, Func Offset: 0x1fc
	// Line 1545, Address: 0x2119c0, Func Offset: 0x200
	// Line 1546, Address: 0x2119c4, Func Offset: 0x204
	// Line 1548, Address: 0x2119e8, Func Offset: 0x228
	// Line 1554, Address: 0x211a10, Func Offset: 0x250
	// Line 1555, Address: 0x211a18, Func Offset: 0x258
	// Line 1558, Address: 0x211a50, Func Offset: 0x290
	// Line 1559, Address: 0x211a58, Func Offset: 0x298
	// Line 1561, Address: 0x211a74, Func Offset: 0x2b4
	// Line 1562, Address: 0x211a7c, Func Offset: 0x2bc
	// Line 1565, Address: 0x211a80, Func Offset: 0x2c0
	// Line 1566, Address: 0x211a90, Func Offset: 0x2d0
	// Line 1568, Address: 0x211a98, Func Offset: 0x2d8
	// Line 1566, Address: 0x211aa0, Func Offset: 0x2e0
	// Line 1567, Address: 0x211aa8, Func Offset: 0x2e8
	// Line 1568, Address: 0x211aac, Func Offset: 0x2ec
	// Line 1569, Address: 0x211ab8, Func Offset: 0x2f8
	// Line 1570, Address: 0x211ac0, Func Offset: 0x300
	// Line 1571, Address: 0x211ac4, Func Offset: 0x304
	// Line 1578, Address: 0x211acc, Func Offset: 0x30c
	// Line 1581, Address: 0x211ae4, Func Offset: 0x324
	// Line 1583, Address: 0x211b00, Func Offset: 0x340
	// Line 1585, Address: 0x211b1c, Func Offset: 0x35c
	// Line 1586, Address: 0x211b2c, Func Offset: 0x36c
	// Line 1587, Address: 0x211b30, Func Offset: 0x370
	// Line 1588, Address: 0x211b48, Func Offset: 0x388
	// Line 1589, Address: 0x211b5c, Func Offset: 0x39c
	// Line 1594, Address: 0x211b64, Func Offset: 0x3a4
	// Line 1598, Address: 0x211b68, Func Offset: 0x3a8
	// Line 1599, Address: 0x211b70, Func Offset: 0x3b0
	// Line 1603, Address: 0x211b78, Func Offset: 0x3b8
	// Line 1604, Address: 0x211b80, Func Offset: 0x3c0
	// Line 1605, Address: 0x211b88, Func Offset: 0x3c8
	// Line 1606, Address: 0x211b8c, Func Offset: 0x3cc
	// Line 1607, Address: 0x211b90, Func Offset: 0x3d0
	// Line 1608, Address: 0x211bb0, Func Offset: 0x3f0
	// Line 1609, Address: 0x211bbc, Func Offset: 0x3fc
	// Line 1611, Address: 0x211bc4, Func Offset: 0x404
	// Line 1612, Address: 0x211be8, Func Offset: 0x428
	// Line 1614, Address: 0x211bf0, Func Offset: 0x430
	// Line 1616, Address: 0x211bf8, Func Offset: 0x438
	// Line 1622, Address: 0x211c00, Func Offset: 0x440
	// Line 1624, Address: 0x211c04, Func Offset: 0x444
	// Line 1627, Address: 0x211c10, Func Offset: 0x450
	// Line 1628, Address: 0x211c18, Func Offset: 0x458
	// Line 1629, Address: 0x211c20, Func Offset: 0x460
	// Line 1631, Address: 0x211c24, Func Offset: 0x464
	// Line 1630, Address: 0x211c28, Func Offset: 0x468
	// Line 1632, Address: 0x211c2c, Func Offset: 0x46c
	// Line 1634, Address: 0x211c30, Func Offset: 0x470
	// Line 1637, Address: 0x211c58, Func Offset: 0x498
	// Line 1638, Address: 0x211c64, Func Offset: 0x4a4
	// Line 1640, Address: 0x211c88, Func Offset: 0x4c8
	// Line 1644, Address: 0x211c90, Func Offset: 0x4d0
	// Line 1643, Address: 0x211c94, Func Offset: 0x4d4
	// Line 1644, Address: 0x211c98, Func Offset: 0x4d8
	// Line 1654, Address: 0x211ccc, Func Offset: 0x50c
	// Line 1655, Address: 0x211ce0, Func Offset: 0x520
	// Line 1658, Address: 0x211cec, Func Offset: 0x52c
	// Line 1659, Address: 0x211d10, Func Offset: 0x550
	// Line 1658, Address: 0x211d14, Func Offset: 0x554
	// Line 1659, Address: 0x211d18, Func Offset: 0x558
	// Line 1663, Address: 0x211d20, Func Offset: 0x560
	// Line 1673, Address: 0x211dc8, Func Offset: 0x608
	// Line 1663, Address: 0x211dcc, Func Offset: 0x60c
	// Line 1666, Address: 0x211dd4, Func Offset: 0x614
	// Line 1673, Address: 0x211df0, Func Offset: 0x630
	// Line 1676, Address: 0x211e00, Func Offset: 0x640
	// Line 1677, Address: 0x211e08, Func Offset: 0x648
	// Line 1680, Address: 0x211e14, Func Offset: 0x654
	// Line 1681, Address: 0x211e1c, Func Offset: 0x65c
	// Line 1685, Address: 0x211e30, Func Offset: 0x670
	// Line 1684, Address: 0x211e34, Func Offset: 0x674
	// Line 1692, Address: 0x211e38, Func Offset: 0x678
	// Line 1693, Address: 0x211e40, Func Offset: 0x680
	// Line 1692, Address: 0x211e44, Func Offset: 0x684
	// Line 1693, Address: 0x211e50, Func Offset: 0x690
	// Line 1694, Address: 0x211e60, Func Offset: 0x6a0
	// Line 1696, Address: 0x211e6c, Func Offset: 0x6ac
	// Line 1697, Address: 0x211e80, Func Offset: 0x6c0
	// Line 1698, Address: 0x211ea8, Func Offset: 0x6e8
	// Line 1699, Address: 0x211eb0, Func Offset: 0x6f0
	// Line 1701, Address: 0x211ed0, Func Offset: 0x710
	// Line 1703, Address: 0x211ed8, Func Offset: 0x718
	// Line 1704, Address: 0x211ee4, Func Offset: 0x724
	// Line 1705, Address: 0x211ef8, Func Offset: 0x738
	// Line 1706, Address: 0x211f20, Func Offset: 0x760
	// Line 1707, Address: 0x211f28, Func Offset: 0x768
	// Line 1709, Address: 0x211f48, Func Offset: 0x788
	// Line 1714, Address: 0x211f50, Func Offset: 0x790
	// Line 1717, Address: 0x211f60, Func Offset: 0x7a0
	// Line 1720, Address: 0x211f9c, Func Offset: 0x7dc
	// Line 1721, Address: 0x211fa4, Func Offset: 0x7e4
	// Line 1722, Address: 0x211fb4, Func Offset: 0x7f4
	// Line 1723, Address: 0x211fb8, Func Offset: 0x7f8
	// Line 1724, Address: 0x211fc0, Func Offset: 0x800
	// Line 1725, Address: 0x211fe4, Func Offset: 0x824
	// Line 1727, Address: 0x211fec, Func Offset: 0x82c
	// Line 1730, Address: 0x211ff0, Func Offset: 0x830
	// Line 1731, Address: 0x211ff8, Func Offset: 0x838
	// Line 1732, Address: 0x212008, Func Offset: 0x848
	// Func End, Address: 0x212048, Func Offset: 0x888
}

// xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef
// Start address: 0x212050
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, float32 startTime)
{
	// Line 1383, Address: 0x212050, Func Offset: 0
	// Line 1385, Address: 0x21206c, Func Offset: 0x1c
	// Line 1386, Address: 0x212078, Func Offset: 0x28
	// Line 1387, Address: 0x212080, Func Offset: 0x30
	// Line 1388, Address: 0x212088, Func Offset: 0x38
	// Line 1392, Address: 0x212090, Func Offset: 0x40
	// Line 1395, Address: 0x212098, Func Offset: 0x48
	// Line 1402, Address: 0x2120dc, Func Offset: 0x8c
	// Line 1398, Address: 0x2120e0, Func Offset: 0x90
	// Line 1399, Address: 0x2120e8, Func Offset: 0x98
	// Line 1400, Address: 0x2120ec, Func Offset: 0x9c
	// Line 1401, Address: 0x2120f0, Func Offset: 0xa0
	// Line 1402, Address: 0x2120f4, Func Offset: 0xa4
	// Line 1408, Address: 0x212104, Func Offset: 0xb4
	// Line 1410, Address: 0x21210c, Func Offset: 0xbc
	// Line 1411, Address: 0x212114, Func Offset: 0xc4
	// Line 1412, Address: 0x21213c, Func Offset: 0xec
	// Line 1413, Address: 0x212140, Func Offset: 0xf0
	// Func End, Address: 0x212158, Func Offset: 0x108
}

// EffectSingleStop__FP11xAnimSingle
// Start address: 0x212160
void EffectSingleStop(xAnimSingle* single)
{
	uint32 i;
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	// Line 1320, Address: 0x212160, Func Offset: 0
	// Line 1322, Address: 0x212174, Func Offset: 0x14
	// Line 1323, Address: 0x2121a0, Func Offset: 0x40
	// Line 1327, Address: 0x2121a8, Func Offset: 0x48
	// Line 1329, Address: 0x2121b8, Func Offset: 0x58
	// Line 1330, Address: 0x2121c8, Func Offset: 0x68
	// Line 1331, Address: 0x2121e4, Func Offset: 0x84
	// Line 1332, Address: 0x212210, Func Offset: 0xb0
	// Line 1335, Address: 0x212218, Func Offset: 0xb8
	// Line 1337, Address: 0x21221c, Func Offset: 0xbc
	// Line 1338, Address: 0x212228, Func Offset: 0xc8
	// Line 1341, Address: 0x21223c, Func Offset: 0xdc
	// Line 1342, Address: 0x212240, Func Offset: 0xe0
	// Line 1343, Address: 0x212260, Func Offset: 0x100
	// Line 1344, Address: 0x212270, Func Offset: 0x110
	// Line 1346, Address: 0x21228c, Func Offset: 0x12c
	// Line 1347, Address: 0x212290, Func Offset: 0x130
	// Line 1348, Address: 0x212294, Func Offset: 0x134
	// Line 1349, Address: 0x2122a0, Func Offset: 0x140
	// Line 1350, Address: 0x2122a4, Func Offset: 0x144
	// Func End, Address: 0x2122c0, Func Offset: 0x160
}

// EffectSingleLoop__FP11xAnimSingle
// Start address: 0x2122c0
void EffectSingleLoop(xAnimSingle* single)
{
	xAnimActiveEffect* alist;
	uint32 index;
	uint32 count;
	xAnimEffect* effect;
	// Line 1283, Address: 0x2122c0, Func Offset: 0
	// Line 1285, Address: 0x2122d8, Func Offset: 0x18
	// Line 1288, Address: 0x2122e0, Func Offset: 0x20
	// Line 1289, Address: 0x2122e4, Func Offset: 0x24
	// Line 1291, Address: 0x2122e8, Func Offset: 0x28
	// Line 1292, Address: 0x2122f0, Func Offset: 0x30
	// Line 1294, Address: 0x212300, Func Offset: 0x40
	// Line 1295, Address: 0x21231c, Func Offset: 0x5c
	// Line 1302, Address: 0x212378, Func Offset: 0xb8
	// Line 1303, Address: 0x212380, Func Offset: 0xc0
	// Line 1304, Address: 0x212384, Func Offset: 0xc4
	// Line 1306, Address: 0x212388, Func Offset: 0xc8
	// Line 1311, Address: 0x2123a0, Func Offset: 0xe0
	// Line 1312, Address: 0x2123a4, Func Offset: 0xe4
	// Line 1313, Address: 0x2123b0, Func Offset: 0xf0
	// Line 1314, Address: 0x2123b4, Func Offset: 0xf4
	// Line 1315, Address: 0x2123d8, Func Offset: 0x118
	// Line 1316, Address: 0x2123dc, Func Offset: 0x11c
	// Func End, Address: 0x2123f8, Func Offset: 0x138
}

// EffectSingleRun__FP11xAnimSingle
// Start address: 0x212400
void EffectSingleRun(xAnimSingle* single)
{
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	float32 time;
	uint32 flags;
	// Line 1247, Address: 0x212400, Func Offset: 0
	// Line 1248, Address: 0x212424, Func Offset: 0x24
	// Line 1250, Address: 0x212428, Func Offset: 0x28
	// Line 1253, Address: 0x21242c, Func Offset: 0x2c
	// Line 1254, Address: 0x212438, Func Offset: 0x38
	// Line 1255, Address: 0x21243c, Func Offset: 0x3c
	// Line 1257, Address: 0x212448, Func Offset: 0x48
	// Line 1260, Address: 0x2124a8, Func Offset: 0xa8
	// Line 1261, Address: 0x2124ac, Func Offset: 0xac
	// Line 1262, Address: 0x2124c8, Func Offset: 0xc8
	// Line 1263, Address: 0x2124d4, Func Offset: 0xd4
	// Line 1264, Address: 0x2124e4, Func Offset: 0xe4
	// Line 1265, Address: 0x212500, Func Offset: 0x100
	// Line 1266, Address: 0x212508, Func Offset: 0x108
	// Line 1268, Address: 0x212554, Func Offset: 0x154
	// Line 1271, Address: 0x212568, Func Offset: 0x168
	// Line 1276, Address: 0x2125b8, Func Offset: 0x1b8
	// Line 1277, Address: 0x2125bc, Func Offset: 0x1bc
	// Line 1278, Address: 0x2125e0, Func Offset: 0x1e0
	// Line 1279, Address: 0x2125e4, Func Offset: 0x1e4
	// Func End, Address: 0x212608, Func Offset: 0x208
}

// EffectSingleDuration__FP11xAnimSingle
// Start address: 0x212610
void EffectSingleDuration(xAnimSingle* single)
{
	float32 time;
	xAnimActiveEffect* alist;
	uint32 index;
	uint32 count;
	// Line 1219, Address: 0x212610, Func Offset: 0
	// Line 1220, Address: 0x212630, Func Offset: 0x20
	// Line 1221, Address: 0x212634, Func Offset: 0x24
	// Line 1222, Address: 0x212638, Func Offset: 0x28
	// Line 1224, Address: 0x21263c, Func Offset: 0x2c
	// Line 1227, Address: 0x212648, Func Offset: 0x38
	// Line 1229, Address: 0x212668, Func Offset: 0x58
	// Line 1230, Address: 0x212684, Func Offset: 0x74
	// Line 1237, Address: 0x2126e0, Func Offset: 0xd0
	// Line 1238, Address: 0x2126e8, Func Offset: 0xd8
	// Line 1239, Address: 0x212704, Func Offset: 0xf4
	// Line 1240, Address: 0x212708, Func Offset: 0xf8
	// Line 1242, Address: 0x21270c, Func Offset: 0xfc
	// Line 1243, Address: 0x212728, Func Offset: 0x118
	// Func End, Address: 0x212748, Func Offset: 0x138
}

// EffectSingleStart__FP11xAnimSingle
// Start address: 0x212750
void EffectSingleStart(xAnimSingle* single)
{
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	float32 time;
	uint32 flags;
	// Line 1172, Address: 0x212750, Func Offset: 0
	// Line 1175, Address: 0x21276c, Func Offset: 0x1c
	// Line 1177, Address: 0x212770, Func Offset: 0x20
	// Line 1175, Address: 0x212774, Func Offset: 0x24
	// Line 1179, Address: 0x212778, Func Offset: 0x28
	// Line 1181, Address: 0x212780, Func Offset: 0x30
	// Line 1182, Address: 0x212784, Func Offset: 0x34
	// Line 1184, Address: 0x212790, Func Offset: 0x40
	// Line 1187, Address: 0x212798, Func Offset: 0x48
	// Line 1188, Address: 0x21279c, Func Offset: 0x4c
	// Line 1189, Address: 0x2127c0, Func Offset: 0x70
	// Line 1190, Address: 0x2127cc, Func Offset: 0x7c
	// Line 1191, Address: 0x2127dc, Func Offset: 0x8c
	// Line 1192, Address: 0x2127f8, Func Offset: 0xa8
	// Line 1193, Address: 0x212800, Func Offset: 0xb0
	// Line 1195, Address: 0x21284c, Func Offset: 0xfc
	// Line 1198, Address: 0x212864, Func Offset: 0x114
	// Line 1201, Address: 0x2128b4, Func Offset: 0x164
	// Line 1205, Address: 0x2128e4, Func Offset: 0x194
	// Line 1206, Address: 0x2128e8, Func Offset: 0x198
	// Line 1207, Address: 0x212908, Func Offset: 0x1b8
	// Line 1211, Address: 0x212958, Func Offset: 0x208
	// Line 1212, Address: 0x21295c, Func Offset: 0x20c
	// Line 1214, Address: 0x212980, Func Offset: 0x230
	// Line 1215, Address: 0x212984, Func Offset: 0x234
	// Func End, Address: 0x2129a0, Func Offset: 0x250
}

// xAnimTableGetState__FP10xAnimTablePCc
// Start address: 0x2129a0
xAnimState* xAnimTableGetState(xAnimTable* table, int8* name)
{
	// Line 1107, Address: 0x2129a0, Func Offset: 0
	// Line 1108, Address: 0x2129b0, Func Offset: 0x10
	// Line 1109, Address: 0x2129f8, Func Offset: 0x58
	// Line 1108, Address: 0x212a00, Func Offset: 0x60
	// Line 1109, Address: 0x212a04, Func Offset: 0x64
	// Func End, Address: 0x212a0c, Func Offset: 0x6c
}

// xAnimTableGetStateID__FP10xAnimTableUi
// Start address: 0x212a10
xAnimState* xAnimTableGetStateID(xAnimTable* table, uint32 ID)
{
	xAnimState* curr;
	// Line 1087, Address: 0x212a10, Func Offset: 0
	// Line 1088, Address: 0x212a14, Func Offset: 0x4
	// Line 1089, Address: 0x212a20, Func Offset: 0x10
	// Line 1090, Address: 0x212a2c, Func Offset: 0x1c
	// Line 1091, Address: 0x212a38, Func Offset: 0x28
	// Line 1092, Address: 0x212a3c, Func Offset: 0x2c
	// Line 1093, Address: 0x212a48, Func Offset: 0x38
	// Line 1094, Address: 0x212a50, Func Offset: 0x40
	// Func End, Address: 0x212a58, Func Offset: 0x48
}

// xAnimTableAddFileID__FP10xAnimTableP9xAnimFileUiUiUi
// Start address: 0x212a60
xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, uint32 stateID, uint32 subStateID, uint32 subStateCount)
{
	// Line 1047, Address: 0x212a60, Func Offset: 0
	// Line 1048, Address: 0x212a80, Func Offset: 0x20
	// Line 1049, Address: 0x212ac0, Func Offset: 0x60
	// Line 1052, Address: 0x212ac8, Func Offset: 0x68
	// Line 1054, Address: 0x212ad0, Func Offset: 0x70
	// Line 1055, Address: 0x212adc, Func Offset: 0x7c
	// Line 1056, Address: 0x212b18, Func Offset: 0xb8
	// Line 1062, Address: 0x212b2c, Func Offset: 0xcc
	// Line 1063, Address: 0x212b34, Func Offset: 0xd4
	// Line 1064, Address: 0x212b40, Func Offset: 0xe0
	// Line 1070, Address: 0x212b50, Func Offset: 0xf0
	// Line 1073, Address: 0x212b54, Func Offset: 0xf4
	// Line 1074, Address: 0x212b64, Func Offset: 0x104
	// Line 1075, Address: 0x212b7c, Func Offset: 0x11c
	// Line 1076, Address: 0x212b88, Func Offset: 0x128
	// Line 1081, Address: 0x212ba4, Func Offset: 0x144
	// Line 1082, Address: 0x212ba8, Func Offset: 0x148
	// Line 1083, Address: 0x212bac, Func Offset: 0x14c
	// Func End, Address: 0x212bc8, Func Offset: 0x168
}

// xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
// Start address: 0x212bd0
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, int8* states)
{
	uint8* buffer;
	int8* stateName;
	// Line 1035, Address: 0x212bd0, Func Offset: 0
	// Line 1039, Address: 0x212bf0, Func Offset: 0x20
	// Line 1040, Address: 0x212c08, Func Offset: 0x38
	// Line 1041, Address: 0x212c10, Func Offset: 0x40
	// Line 1042, Address: 0x212c30, Func Offset: 0x60
	// Line 1043, Address: 0x212c48, Func Offset: 0x78
	// Line 1044, Address: 0x212c50, Func Offset: 0x80
	// Func End, Address: 0x212c68, Func Offset: 0x98
}

// xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
// Start address: 0x212c70
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, int8* source, int8* dest, uint32(*conditional)(xAnimTransition*, xAnimSingle*, void*), uint32(*callback)(xAnimTransition*, xAnimSingle*, void*), uint32 flags, uint32 userFlags, float32 srcTime, float32 destTime, uint16 priority, uint16 queuePriority, float32 blendRecip, uint16* blendOffset)
{
	xAnimTransition* tran;
	uint8 isComplex;
	int32 i;
	// Line 993, Address: 0x212c70, Func Offset: 0
	// Line 994, Address: 0x212cc0, Func Offset: 0x50
	// Line 993, Address: 0x212cc8, Func Offset: 0x58
	// Line 994, Address: 0x212cd8, Func Offset: 0x68
	// Line 996, Address: 0x212d04, Func Offset: 0x94
	// Line 998, Address: 0x212d28, Func Offset: 0xb8
	// Line 1001, Address: 0x212d2c, Func Offset: 0xbc
	// Line 998, Address: 0x212d30, Func Offset: 0xc0
	// Line 1002, Address: 0x212d34, Func Offset: 0xc4
	// Line 1004, Address: 0x212d48, Func Offset: 0xd8
	// Line 1005, Address: 0x212d50, Func Offset: 0xe0
	// Line 1006, Address: 0x212d58, Func Offset: 0xe8
	// Line 1005, Address: 0x212d60, Func Offset: 0xf0
	// Line 1006, Address: 0x212d68, Func Offset: 0xf8
	// Line 1008, Address: 0x212d78, Func Offset: 0x108
	// Line 1009, Address: 0x212d80, Func Offset: 0x110
	// Line 1011, Address: 0x212d98, Func Offset: 0x128
	// Line 1018, Address: 0x212df4, Func Offset: 0x184
	// Line 1019, Address: 0x212df8, Func Offset: 0x188
	// Line 1020, Address: 0x212dfc, Func Offset: 0x18c
	// Line 1021, Address: 0x212e00, Func Offset: 0x190
	// Line 1022, Address: 0x212e04, Func Offset: 0x194
	// Line 1023, Address: 0x212e0c, Func Offset: 0x19c
	// Line 1024, Address: 0x212e10, Func Offset: 0x1a0
	// Line 1025, Address: 0x212e14, Func Offset: 0x1a4
	// Line 1026, Address: 0x212e1c, Func Offset: 0x1ac
	// Line 1027, Address: 0x212e20, Func Offset: 0x1b0
	// Line 1028, Address: 0x212f50, Func Offset: 0x2e0
	// Line 1030, Address: 0x212f54, Func Offset: 0x2e4
	// Line 1031, Address: 0x212f68, Func Offset: 0x2f8
	// Line 1032, Address: 0x212f6c, Func Offset: 0x2fc
	// Func End, Address: 0x212fa8, Func Offset: 0x338
}

// xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCc
// Start address: 0x212fb0
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, int8* source)
{
	// Line 986, Address: 0x212fb0, Func Offset: 0
	// Func End, Address: 0x212fb8, Func Offset: 0x8
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
	xAnimTransition* substTransitionList[32];
	uint32 substTransitionCount;
	uint8 hasSubst;
	int32 i;
	uint8 isComplex;
	int8* COMPLEX_PATTERNS;
	int8* search;
	xAnimState* state;
	int8 extra[128];
	int8 tempName[128];
	int8* tempIterator;
	int8* extraIterator;
	uint8 allowMissingState;
	int32 i;
	uint32 extraIteratorLength;
	xAnimTransition* duplicatedTransition;
	xAnimTransitionList* curr;
	// Line 826, Address: 0x212fc0, Func Offset: 0
	// Line 841, Address: 0x212fd0, Func Offset: 0x10
	// Line 826, Address: 0x212fd4, Func Offset: 0x14
	// Line 829, Address: 0x212fe4, Func Offset: 0x24
	// Line 826, Address: 0x212fe8, Func Offset: 0x28
	// Line 836, Address: 0x212ffc, Func Offset: 0x3c
	// Line 844, Address: 0x213008, Func Offset: 0x48
	// Line 836, Address: 0x21300c, Func Offset: 0x4c
	// Line 840, Address: 0x213010, Func Offset: 0x50
	// Line 845, Address: 0x213018, Func Offset: 0x58
	// Line 846, Address: 0x213020, Func Offset: 0x60
	// Line 847, Address: 0x21302c, Func Offset: 0x6c
	// Line 846, Address: 0x213034, Func Offset: 0x74
	// Line 847, Address: 0x213040, Func Offset: 0x80
	// Line 848, Address: 0x213050, Func Offset: 0x90
	// Line 849, Address: 0x213054, Func Offset: 0x94
	// Line 850, Address: 0x21305c, Func Offset: 0x9c
	// Line 851, Address: 0x213074, Func Offset: 0xb4
	// Line 856, Address: 0x213078, Func Offset: 0xb8
	// Line 857, Address: 0x213090, Func Offset: 0xd0
	// Line 859, Address: 0x2130a8, Func Offset: 0xe8
	// Line 860, Address: 0x2130ac, Func Offset: 0xec
	// Line 862, Address: 0x2130b4, Func Offset: 0xf4
	// Line 861, Address: 0x2130b8, Func Offset: 0xf8
	// Line 862, Address: 0x2130bc, Func Offset: 0xfc
	// Line 863, Address: 0x2130cc, Func Offset: 0x10c
	// Line 865, Address: 0x213120, Func Offset: 0x160
	// Line 867, Address: 0x213128, Func Offset: 0x168
	// Line 871, Address: 0x213138, Func Offset: 0x178
	// Line 873, Address: 0x213140, Func Offset: 0x180
	// Line 875, Address: 0x213148, Func Offset: 0x188
	// Line 877, Address: 0x213150, Func Offset: 0x190
	// Line 881, Address: 0x2131ac, Func Offset: 0x1ec
	// Line 886, Address: 0x2131b8, Func Offset: 0x1f8
	// Line 884, Address: 0x2131bc, Func Offset: 0x1fc
	// Line 887, Address: 0x2131c0, Func Offset: 0x200
	// Line 885, Address: 0x2131c4, Func Offset: 0x204
	// Line 887, Address: 0x2131c8, Func Offset: 0x208
	// Line 888, Address: 0x2131d8, Func Offset: 0x218
	// Line 889, Address: 0x2131f0, Func Offset: 0x230
	// Line 891, Address: 0x2131f8, Func Offset: 0x238
	// Line 892, Address: 0x213208, Func Offset: 0x248
	// Line 894, Address: 0x213214, Func Offset: 0x254
	// Line 893, Address: 0x213218, Func Offset: 0x258
	// Line 895, Address: 0x21321c, Func Offset: 0x25c
	// Line 896, Address: 0x213228, Func Offset: 0x268
	// Line 900, Address: 0x213248, Func Offset: 0x288
	// Line 901, Address: 0x213298, Func Offset: 0x2d8
	// Line 902, Address: 0x2132ac, Func Offset: 0x2ec
	// Line 906, Address: 0x2132b0, Func Offset: 0x2f0
	// Line 907, Address: 0x2132bc, Func Offset: 0x2fc
	// Line 908, Address: 0x2132f0, Func Offset: 0x330
	// Line 909, Address: 0x213300, Func Offset: 0x340
	// Line 910, Address: 0x213304, Func Offset: 0x344
	// Line 912, Address: 0x213308, Func Offset: 0x348
	// Line 915, Address: 0x213310, Func Offset: 0x350
	// Line 912, Address: 0x213314, Func Offset: 0x354
	// Line 916, Address: 0x21332c, Func Offset: 0x36c
	// Line 919, Address: 0x213330, Func Offset: 0x370
	// Line 920, Address: 0x21333c, Func Offset: 0x37c
	// Line 924, Address: 0x213430, Func Offset: 0x470
	// Line 925, Address: 0x213434, Func Offset: 0x474
	// Line 927, Address: 0x21343c, Func Offset: 0x47c
	// Line 929, Address: 0x213448, Func Offset: 0x488
	// Line 933, Address: 0x213490, Func Offset: 0x4d0
	// Line 935, Address: 0x213498, Func Offset: 0x4d8
	// Line 936, Address: 0x2134a4, Func Offset: 0x4e4
	// Line 940, Address: 0x213598, Func Offset: 0x5d8
	// Line 941, Address: 0x2135b0, Func Offset: 0x5f0
	// Line 943, Address: 0x2135c0, Func Offset: 0x600
	// Line 944, Address: 0x2135c8, Func Offset: 0x608
	// Line 945, Address: 0x2135fc, Func Offset: 0x63c
	// Line 947, Address: 0x213600, Func Offset: 0x640
	// Line 948, Address: 0x213610, Func Offset: 0x650
	// Line 949, Address: 0x213620, Func Offset: 0x660
	// Line 954, Address: 0x213688, Func Offset: 0x6c8
	// Line 956, Address: 0x2136a8, Func Offset: 0x6e8
	// Line 957, Address: 0x2136ac, Func Offset: 0x6ec
	// Line 958, Address: 0x2136b8, Func Offset: 0x6f8
	// Line 960, Address: 0x2136d0, Func Offset: 0x710
	// Line 961, Address: 0x2136e8, Func Offset: 0x728
	// Line 962, Address: 0x2136f0, Func Offset: 0x730
	// Line 963, Address: 0x2136f8, Func Offset: 0x738
	// Line 965, Address: 0x213700, Func Offset: 0x740
	// Line 966, Address: 0x213708, Func Offset: 0x748
	// Line 967, Address: 0x213720, Func Offset: 0x760
	// Line 968, Address: 0x213734, Func Offset: 0x774
	// Line 969, Address: 0x213744, Func Offset: 0x784
	// Line 972, Address: 0x213754, Func Offset: 0x794
	// Line 969, Address: 0x213758, Func Offset: 0x798
	// Line 972, Address: 0x213760, Func Offset: 0x7a0
	// Line 974, Address: 0x21376c, Func Offset: 0x7ac
	// Line 975, Address: 0x213778, Func Offset: 0x7b8
	// Line 976, Address: 0x213788, Func Offset: 0x7c8
	// Line 980, Address: 0x21379c, Func Offset: 0x7dc
	// Line 979, Address: 0x2137a0, Func Offset: 0x7e0
	// Line 976, Address: 0x2137a4, Func Offset: 0x7e4
	// Line 977, Address: 0x2137a8, Func Offset: 0x7e8
	// Line 980, Address: 0x2137ac, Func Offset: 0x7ec
	// Line 977, Address: 0x2137b0, Func Offset: 0x7f0
	// Line 978, Address: 0x2137c0, Func Offset: 0x800
	// Line 979, Address: 0x2137d0, Func Offset: 0x810
	// Line 980, Address: 0x2137e4, Func Offset: 0x824
	// Line 981, Address: 0x2137ec, Func Offset: 0x82c
	// Line 982, Address: 0x2137f0, Func Offset: 0x830
	// Func End, Address: 0x213820, Func Offset: 0x860
}

// xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
// Start address: 0x213820
xAnimState* xAnimTableNewState(xAnimTable* table, int8* name, uint32 flags, uint32 userFlags, float32 speed, float32* boneBlend, float32* timeSnap, float32 fadeRecip, uint16* fadeOffset, void* callbackData, void(*beforeEnter)(xAnimPlay*, xAnimState*), void(*stateCallback)(xAnimState*, xAnimSingle*, void*), void(*beforeAnimMatrices)(xAnimPlay*, xQuat*, xVec3*, int32))
{
	xAnimState* state;
	// Line 736, Address: 0x213820, Func Offset: 0
	// Line 739, Address: 0x213874, Func Offset: 0x54
	// Line 740, Address: 0x2138b0, Func Offset: 0x90
	// Line 741, Address: 0x2138b8, Func Offset: 0x98
	// Line 743, Address: 0x2138bc, Func Offset: 0x9c
	// Line 744, Address: 0x2138c8, Func Offset: 0xa8
	// Line 745, Address: 0x2138d0, Func Offset: 0xb0
	// Line 753, Address: 0x2138d8, Func Offset: 0xb8
	// Line 754, Address: 0x2138e8, Func Offset: 0xc8
	// Line 755, Address: 0x2138ec, Func Offset: 0xcc
	// Line 756, Address: 0x2138f0, Func Offset: 0xd0
	// Line 757, Address: 0x2138f4, Func Offset: 0xd4
	// Line 758, Address: 0x2138f8, Func Offset: 0xd8
	// Line 759, Address: 0x2138fc, Func Offset: 0xdc
	// Line 760, Address: 0x213900, Func Offset: 0xe0
	// Line 761, Address: 0x213904, Func Offset: 0xe4
	// Line 763, Address: 0x213908, Func Offset: 0xe8
	// Line 773, Address: 0x213a20, Func Offset: 0x200
	// Line 763, Address: 0x213a24, Func Offset: 0x204
	// Line 764, Address: 0x213a28, Func Offset: 0x208
	// Line 766, Address: 0x213a2c, Func Offset: 0x20c
	// Line 768, Address: 0x213a30, Func Offset: 0x210
	// Line 769, Address: 0x213a34, Func Offset: 0x214
	// Line 770, Address: 0x213a3c, Func Offset: 0x21c
	// Line 771, Address: 0x213a44, Func Offset: 0x224
	// Line 774, Address: 0x213a4c, Func Offset: 0x22c
	// Func End, Address: 0x213a84, Func Offset: 0x264
}

// xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState
// Start address: 0x213a90
void xAnimDefaultBeforeEnter(xAnimState* state)
{
	uint32 entry;
	// Line 724, Address: 0x213a90, Func Offset: 0
	// Line 725, Address: 0x213aa4, Func Offset: 0x14
	// Line 726, Address: 0x213aac, Func Offset: 0x1c
	// Line 727, Address: 0x213ac8, Func Offset: 0x38
	// Line 729, Address: 0x213ad8, Func Offset: 0x48
	// Func End, Address: 0x213aec, Func Offset: 0x5c
}

// xAnimTableNew__FPCcPP10xAnimTableUi
// Start address: 0x213af0
xAnimTable* xAnimTableNew(int8* name, xAnimTable** linkedList, uint32 userFlags)
{
	xAnimTable* table;
	// Line 705, Address: 0x213af0, Func Offset: 0
	// Line 707, Address: 0x213b0c, Func Offset: 0x1c
	// Line 708, Address: 0x213b20, Func Offset: 0x30
	// Line 709, Address: 0x213b28, Func Offset: 0x38
	// Line 711, Address: 0x213b30, Func Offset: 0x40
	// Line 712, Address: 0x213b38, Func Offset: 0x48
	// Line 713, Address: 0x213b3c, Func Offset: 0x4c
	// Line 714, Address: 0x213b40, Func Offset: 0x50
	// Line 715, Address: 0x213b44, Func Offset: 0x54
	// Line 716, Address: 0x213b48, Func Offset: 0x58
	// Line 717, Address: 0x213b4c, Func Offset: 0x5c
	// Line 718, Address: 0x213b50, Func Offset: 0x60
	// Line 719, Address: 0x213b54, Func Offset: 0x64
	// Line 721, Address: 0x213b58, Func Offset: 0x68
	// Func End, Address: 0x213b70, Func Offset: 0x80
}

// xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
// Start address: 0x213b70
xAnimEffect* xAnimStateNewEffect(xAnimState* state, uint32 flags, float32 startTime, float32 endTime, uint32(*callback)(uint32, xAnimActiveEffect*, xAnimSingle*, void*), uint32 userDataSize)
{
	xAnimEffect* curr;
	xAnimEffect** prev;
	xAnimEffect* effect;
	// Line 650, Address: 0x213b70, Func Offset: 0
	// Line 651, Address: 0x213b98, Func Offset: 0x28
	// Line 652, Address: 0x213bcc, Func Offset: 0x5c
	// Line 653, Address: 0x213bd0, Func Offset: 0x60
	// Line 654, Address: 0x213bd4, Func Offset: 0x64
	// Line 655, Address: 0x213bd8, Func Offset: 0x68
	// Line 659, Address: 0x213bdc, Func Offset: 0x6c
	// Line 660, Address: 0x213be0, Func Offset: 0x70
	// Line 661, Address: 0x213be8, Func Offset: 0x78
	// Line 662, Address: 0x213bec, Func Offset: 0x7c
	// Line 663, Address: 0x213bf0, Func Offset: 0x80
	// Line 664, Address: 0x213c10, Func Offset: 0xa0
	// Line 665, Address: 0x213c14, Func Offset: 0xa4
	// Line 668, Address: 0x213c18, Func Offset: 0xa8
	// Func End, Address: 0x213c38, Func Offset: 0xc8
}

// xAnimFileEval__FP9xAnimFilefPfUiP5xVec3P5xQuatPf
// Start address: 0x213c40
void xAnimFileEval(xAnimFile* data, float32 time, float32* bilinear, uint32 flags, xVec3* tran, xQuat* quat)
{
	int32 i;
	uint32 numBones;
	float32 bilerp[2];
	uint32 biindex[2];
	uint32 biplus[2];
	xQuat* q0;
	xVec3* t0;
	xQuat* q1;
	xVec3* t1;
	// Line 561, Address: 0x213c40, Func Offset: 0
	// Line 569, Address: 0x213c88, Func Offset: 0x48
	// Line 570, Address: 0x213cd4, Func Offset: 0x94
	// Line 573, Address: 0x213d20, Func Offset: 0xe0
	// Line 578, Address: 0x213d2c, Func Offset: 0xec
	// Line 579, Address: 0x213d4c, Func Offset: 0x10c
	// Line 580, Address: 0x213d68, Func Offset: 0x128
	// Line 583, Address: 0x213d74, Func Offset: 0x134
	// Line 588, Address: 0x213d8c, Func Offset: 0x14c
	// Line 589, Address: 0x213db8, Func Offset: 0x178
	// Line 590, Address: 0x213e14, Func Offset: 0x1d4
	// Line 591, Address: 0x213e1c, Func Offset: 0x1dc
	// Line 592, Address: 0x213e20, Func Offset: 0x1e0
	// Line 591, Address: 0x213e24, Func Offset: 0x1e4
	// Line 592, Address: 0x213e28, Func Offset: 0x1e8
	// Line 593, Address: 0x213e68, Func Offset: 0x228
	// Line 592, Address: 0x213e6c, Func Offset: 0x22c
	// Line 593, Address: 0x213e70, Func Offset: 0x230
	// Line 592, Address: 0x213e74, Func Offset: 0x234
	// Line 593, Address: 0x213e78, Func Offset: 0x238
	// Line 594, Address: 0x213e80, Func Offset: 0x240
	// Line 593, Address: 0x213e84, Func Offset: 0x244
	// Line 594, Address: 0x213e88, Func Offset: 0x248
	// Line 593, Address: 0x213e8c, Func Offset: 0x24c
	// Line 594, Address: 0x213e98, Func Offset: 0x258
	// Line 598, Address: 0x213ea0, Func Offset: 0x260
	// Line 594, Address: 0x213ea4, Func Offset: 0x264
	// Line 601, Address: 0x213ea8, Func Offset: 0x268
	// Line 597, Address: 0x213eb4, Func Offset: 0x274
	// Line 601, Address: 0x213eb8, Func Offset: 0x278
	// Line 605, Address: 0x213ed4, Func Offset: 0x294
	// Line 604, Address: 0x213ed8, Func Offset: 0x298
	// Line 608, Address: 0x213edc, Func Offset: 0x29c
	// Line 609, Address: 0x213f18, Func Offset: 0x2d8
	// Line 610, Address: 0x213f50, Func Offset: 0x310
	// Line 612, Address: 0x213f88, Func Offset: 0x348
	// Line 613, Address: 0x213fc0, Func Offset: 0x380
	// Line 614, Address: 0x213ff8, Func Offset: 0x3b8
	// Line 616, Address: 0x21402c, Func Offset: 0x3ec
	// Line 618, Address: 0x214064, Func Offset: 0x424
	// Line 621, Address: 0x214088, Func Offset: 0x448
	// Line 622, Address: 0x2140c0, Func Offset: 0x480
	// Line 623, Address: 0x2140f8, Func Offset: 0x4b8
	// Line 625, Address: 0x21412c, Func Offset: 0x4ec
	// Line 628, Address: 0x214148, Func Offset: 0x508
	// Line 629, Address: 0x214180, Func Offset: 0x540
	// Line 630, Address: 0x2141b8, Func Offset: 0x578
	// Line 632, Address: 0x2141ec, Func Offset: 0x5ac
	// Line 634, Address: 0x2141f8, Func Offset: 0x5b8
	// Line 637, Address: 0x214230, Func Offset: 0x5f0
	// Line 639, Address: 0x214238, Func Offset: 0x5f8
	// Line 640, Address: 0x214254, Func Offset: 0x614
	// Line 642, Address: 0x214258, Func Offset: 0x618
	// Func End, Address: 0x214290, Func Offset: 0x650
}

// xAnimFileSetTime__FP9xAnimFileff
// Start address: 0x214290
void xAnimFileSetTime(xAnimFile* data, float32 duration, float32 timeOffset)
{
	float32 rawDuration;
	// Line 547, Address: 0x214290, Func Offset: 0
	// Line 548, Address: 0x2142a8, Func Offset: 0x18
	// Line 549, Address: 0x2142dc, Func Offset: 0x4c
	// Line 550, Address: 0x2142fc, Func Offset: 0x6c
	// Line 553, Address: 0x214300, Func Offset: 0x70
	// Line 554, Address: 0x214304, Func Offset: 0x74
	// Line 555, Address: 0x214310, Func Offset: 0x80
	// Line 556, Address: 0x214314, Func Offset: 0x84
	// Line 557, Address: 0x214338, Func Offset: 0xa8
	// Func End, Address: 0x214350, Func Offset: 0xc0
}

// xAnimFileNew__FPvPCcUiPP9xAnimFile
// Start address: 0x214350
xAnimFile* xAnimFileNew(void* rawData, int8* name, uint32 flags, xAnimFile** linkedList)
{
	// Line 539, Address: 0x214350, Func Offset: 0
	// Line 541, Address: 0x214354, Func Offset: 0x4
	// Line 539, Address: 0x214358, Func Offset: 0x8
	// Line 541, Address: 0x21435c, Func Offset: 0xc
	// Line 539, Address: 0x214360, Func Offset: 0x10
	// Line 541, Address: 0x214364, Func Offset: 0x14
	// Line 542, Address: 0x21436c, Func Offset: 0x1c
	// Func End, Address: 0x214378, Func Offset: 0x28
}

// xAnimFileNewBilinear__FPPvPCcUiPP9xAnimFileUiUi
// Start address: 0x214380
xAnimFile* xAnimFileNewBilinear(void** rawData, int8* name, uint32 flags, xAnimFile** linkedList, uint32 numX, uint32 numY)
{
	int32 i;
	xAnimFile* afile;
	// Line 500, Address: 0x214380, Func Offset: 0
	// Line 502, Address: 0x2143bc, Func Offset: 0x3c
	// Line 508, Address: 0x214400, Func Offset: 0x80
	// Line 509, Address: 0x214418, Func Offset: 0x98
	// Line 512, Address: 0x214420, Func Offset: 0xa0
	// Line 513, Address: 0x214438, Func Offset: 0xb8
	// Line 515, Address: 0x214440, Func Offset: 0xc0
	// Line 516, Address: 0x214448, Func Offset: 0xc8
	// Line 518, Address: 0x214450, Func Offset: 0xd0
	// Line 519, Address: 0x214458, Func Offset: 0xd8
	// Line 520, Address: 0x21445c, Func Offset: 0xdc
	// Line 522, Address: 0x214460, Func Offset: 0xe0
	// Line 523, Address: 0x214464, Func Offset: 0xe4
	// Line 522, Address: 0x214468, Func Offset: 0xe8
	// Line 523, Address: 0x21446c, Func Offset: 0xec
	// Line 524, Address: 0x214488, Func Offset: 0x108
	// Line 527, Address: 0x214558, Func Offset: 0x1d8
	// Line 528, Address: 0x214568, Func Offset: 0x1e8
	// Line 529, Address: 0x214570, Func Offset: 0x1f0
	// Line 531, Address: 0x2145e8, Func Offset: 0x268
	// Line 529, Address: 0x2145ec, Func Offset: 0x26c
	// Line 531, Address: 0x2145f0, Func Offset: 0x270
	// Line 532, Address: 0x21460c, Func Offset: 0x28c
	// Line 535, Address: 0x214610, Func Offset: 0x290
	// Line 533, Address: 0x214614, Func Offset: 0x294
	// Line 536, Address: 0x214618, Func Offset: 0x298
	// Func End, Address: 0x214644, Func Offset: 0x2c4
}

// xAnimTempTransitionInit__FUi
// Start address: 0x214650
void xAnimTempTransitionInit(uint32 count)
{
	// Line 346, Address: 0x214650, Func Offset: 0
	// Line 348, Address: 0x214654, Func Offset: 0x4
	// Line 346, Address: 0x214658, Func Offset: 0x8
	// Line 348, Address: 0x21465c, Func Offset: 0xc
	// Line 346, Address: 0x214660, Func Offset: 0x10
	// Line 348, Address: 0x214664, Func Offset: 0x14
	// Line 349, Address: 0x2146a8, Func Offset: 0x58
	// Func End, Address: 0x2146b8, Func Offset: 0x68
}

// xAnimInit__Fv
// Start address: 0x2146c0
void xAnimInit()
{
	// Line 330, Address: 0x2146c0, Func Offset: 0
	// Line 338, Address: 0x2146c8, Func Offset: 0x8
	// Line 341, Address: 0x2146d0, Func Offset: 0x10
	// Line 342, Address: 0x2146e4, Func Offset: 0x24
	// Func End, Address: 0x2146f0, Func Offset: 0x30
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
	int8 nextPattern[128];
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
	// Line 96, Address: 0x2146f0, Func Offset: 0
	// Line 100, Address: 0x214720, Func Offset: 0x30
	// Line 96, Address: 0x214724, Func Offset: 0x34
	// Line 100, Address: 0x214728, Func Offset: 0x38
	// Line 96, Address: 0x21472c, Func Offset: 0x3c
	// Line 101, Address: 0x214734, Func Offset: 0x44
	// Line 97, Address: 0x214740, Func Offset: 0x50
	// Line 101, Address: 0x214744, Func Offset: 0x54
	// Line 103, Address: 0x214758, Func Offset: 0x68
	// Line 108, Address: 0x2147b8, Func Offset: 0xc8
	// Line 109, Address: 0x2147c0, Func Offset: 0xd0
	// Line 111, Address: 0x2147c8, Func Offset: 0xd8
	// Line 115, Address: 0x2147d4, Func Offset: 0xe4
	// Line 119, Address: 0x2147d8, Func Offset: 0xe8
	// Line 118, Address: 0x2147dc, Func Offset: 0xec
	// Line 119, Address: 0x2147e0, Func Offset: 0xf0
	// Line 120, Address: 0x214804, Func Offset: 0x114
	// Line 119, Address: 0x214808, Func Offset: 0x118
	// Line 120, Address: 0x21480c, Func Offset: 0x11c
	// Line 121, Address: 0x214820, Func Offset: 0x130
	// Line 122, Address: 0x214854, Func Offset: 0x164
	// Line 123, Address: 0x21485c, Func Offset: 0x16c
	// Line 127, Address: 0x214860, Func Offset: 0x170
	// Line 128, Address: 0x214864, Func Offset: 0x174
	// Line 129, Address: 0x21486c, Func Offset: 0x17c
	// Line 130, Address: 0x214880, Func Offset: 0x190
	// Line 131, Address: 0x214888, Func Offset: 0x198
	// Line 132, Address: 0x214890, Func Offset: 0x1a0
	// Line 133, Address: 0x214898, Func Offset: 0x1a8
	// Line 134, Address: 0x2148a0, Func Offset: 0x1b0
	// Line 137, Address: 0x2148a8, Func Offset: 0x1b8
	// Line 138, Address: 0x2148b0, Func Offset: 0x1c0
	// Line 139, Address: 0x2148b8, Func Offset: 0x1c8
	// Line 140, Address: 0x214910, Func Offset: 0x220
	// Line 141, Address: 0x21491c, Func Offset: 0x22c
	// Line 144, Address: 0x214920, Func Offset: 0x230
	// Line 145, Address: 0x214924, Func Offset: 0x234
	// Line 144, Address: 0x214928, Func Offset: 0x238
	// Line 145, Address: 0x214930, Func Offset: 0x240
	// Line 146, Address: 0x214940, Func Offset: 0x250
	// Line 148, Address: 0x214944, Func Offset: 0x254
	// Line 149, Address: 0x214950, Func Offset: 0x260
	// Line 152, Address: 0x214a18, Func Offset: 0x328
	// Line 155, Address: 0x214a28, Func Offset: 0x338
	// Line 156, Address: 0x214a40, Func Offset: 0x350
	// Line 158, Address: 0x214a48, Func Offset: 0x358
	// Line 159, Address: 0x214a50, Func Offset: 0x360
	// Line 161, Address: 0x214a78, Func Offset: 0x388
	// Line 166, Address: 0x214a80, Func Offset: 0x390
	// Line 168, Address: 0x214a88, Func Offset: 0x398
	// Line 175, Address: 0x214a90, Func Offset: 0x3a0
	// Line 177, Address: 0x214a98, Func Offset: 0x3a8
	// Line 178, Address: 0x214aa0, Func Offset: 0x3b0
	// Line 179, Address: 0x214ab0, Func Offset: 0x3c0
	// Line 180, Address: 0x214ab4, Func Offset: 0x3c4
	// Line 179, Address: 0x214abc, Func Offset: 0x3cc
	// Line 181, Address: 0x214ac0, Func Offset: 0x3d0
	// Line 183, Address: 0x214ac8, Func Offset: 0x3d8
	// Line 186, Address: 0x214acc, Func Offset: 0x3dc
	// Line 188, Address: 0x214ad4, Func Offset: 0x3e4
	// Line 191, Address: 0x214ad8, Func Offset: 0x3e8
	// Line 192, Address: 0x214adc, Func Offset: 0x3ec
	// Line 194, Address: 0x214ae4, Func Offset: 0x3f4
	// Line 195, Address: 0x214af0, Func Offset: 0x400
	// Line 196, Address: 0x214af4, Func Offset: 0x404
	// Line 198, Address: 0x214b08, Func Offset: 0x418
	// Line 200, Address: 0x214b10, Func Offset: 0x420
	// Line 201, Address: 0x214b18, Func Offset: 0x428
	// Line 202, Address: 0x214b20, Func Offset: 0x430
	// Line 203, Address: 0x214b28, Func Offset: 0x438
	// Line 204, Address: 0x214b30, Func Offset: 0x440
	// Line 205, Address: 0x214b38, Func Offset: 0x448
	// Line 206, Address: 0x214b3c, Func Offset: 0x44c
	// Line 205, Address: 0x214b40, Func Offset: 0x450
	// Line 206, Address: 0x214b44, Func Offset: 0x454
	// Line 207, Address: 0x214b58, Func Offset: 0x468
	// Line 209, Address: 0x214b60, Func Offset: 0x470
	// Line 210, Address: 0x214b68, Func Offset: 0x478
	// Line 211, Address: 0x214b6c, Func Offset: 0x47c
	// Line 210, Address: 0x214b70, Func Offset: 0x480
	// Line 211, Address: 0x214b74, Func Offset: 0x484
	// Line 212, Address: 0x214b90, Func Offset: 0x4a0
	// Line 216, Address: 0x214b98, Func Offset: 0x4a8
	// Line 217, Address: 0x214bc4, Func Offset: 0x4d4
	// Line 221, Address: 0x214bc8, Func Offset: 0x4d8
	// Line 218, Address: 0x214bcc, Func Offset: 0x4dc
	// Line 217, Address: 0x214bd0, Func Offset: 0x4e0
	// Line 222, Address: 0x214bd4, Func Offset: 0x4e4
	// Line 223, Address: 0x214be8, Func Offset: 0x4f8
	// Line 224, Address: 0x214bec, Func Offset: 0x4fc
	// Line 225, Address: 0x214bf0, Func Offset: 0x500
	// Line 226, Address: 0x214c00, Func Offset: 0x510
	// Line 228, Address: 0x214c04, Func Offset: 0x514
	// Line 226, Address: 0x214c08, Func Offset: 0x518
	// Line 228, Address: 0x214c0c, Func Offset: 0x51c
	// Line 231, Address: 0x214c20, Func Offset: 0x530
	// Line 232, Address: 0x214c28, Func Offset: 0x538
	// Line 233, Address: 0x214c30, Func Offset: 0x540
	// Line 236, Address: 0x214c34, Func Offset: 0x544
	// Line 237, Address: 0x214c3c, Func Offset: 0x54c
	// Line 241, Address: 0x214c44, Func Offset: 0x554
	// Line 243, Address: 0x214c48, Func Offset: 0x558
	// Line 248, Address: 0x214c50, Func Offset: 0x560
	// Line 246, Address: 0x214c54, Func Offset: 0x564
	// Line 248, Address: 0x214c58, Func Offset: 0x568
	// Line 249, Address: 0x214c60, Func Offset: 0x570
	// Line 254, Address: 0x214c88, Func Offset: 0x598
	// Line 251, Address: 0x214c8c, Func Offset: 0x59c
	// Line 253, Address: 0x214c90, Func Offset: 0x5a0
	// Line 254, Address: 0x214c94, Func Offset: 0x5a4
	// Line 255, Address: 0x214c9c, Func Offset: 0x5ac
	// Line 257, Address: 0x214ca0, Func Offset: 0x5b0
	// Line 258, Address: 0x214cb0, Func Offset: 0x5c0
	// Line 259, Address: 0x214cd0, Func Offset: 0x5e0
	// Line 260, Address: 0x214cd4, Func Offset: 0x5e4
	// Line 259, Address: 0x214cd8, Func Offset: 0x5e8
	// Line 264, Address: 0x214ce0, Func Offset: 0x5f0
	// Line 266, Address: 0x214d00, Func Offset: 0x610
	// Line 267, Address: 0x214d0c, Func Offset: 0x61c
	// Line 269, Address: 0x214d38, Func Offset: 0x648
	// Line 270, Address: 0x214d40, Func Offset: 0x650
	// Line 272, Address: 0x214d48, Func Offset: 0x658
	// Line 274, Address: 0x214d50, Func Offset: 0x660
	// Line 275, Address: 0x214d54, Func Offset: 0x664
	// Line 274, Address: 0x214d58, Func Offset: 0x668
	// Line 275, Address: 0x214d5c, Func Offset: 0x66c
	// Line 280, Address: 0x214d60, Func Offset: 0x670
	// Line 281, Address: 0x214d6c, Func Offset: 0x67c
	// Line 282, Address: 0x214d70, Func Offset: 0x680
	// Line 285, Address: 0x214d78, Func Offset: 0x688
	// Line 286, Address: 0x214d84, Func Offset: 0x694
	// Line 290, Address: 0x214d8c, Func Offset: 0x69c
	// Line 291, Address: 0x214d90, Func Offset: 0x6a0
	// Line 294, Address: 0x214d98, Func Offset: 0x6a8
	// Line 295, Address: 0x214da8, Func Offset: 0x6b8
	// Line 296, Address: 0x214db0, Func Offset: 0x6c0
	// Line 297, Address: 0x214db4, Func Offset: 0x6c4
	// Line 299, Address: 0x214db8, Func Offset: 0x6c8
	// Line 302, Address: 0x214dc8, Func Offset: 0x6d8
	// Line 303, Address: 0x214dd4, Func Offset: 0x6e4
	// Line 304, Address: 0x214dd8, Func Offset: 0x6e8
	// Line 305, Address: 0x214de4, Func Offset: 0x6f4
	// Line 306, Address: 0x214df8, Func Offset: 0x708
	// Line 307, Address: 0x214e00, Func Offset: 0x710
	// Func End, Address: 0x214e30, Func Offset: 0x740
}

