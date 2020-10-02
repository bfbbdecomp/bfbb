typedef struct RwObjectHasFrame;
typedef struct xLinkAsset;
typedef struct xAnimTable;
typedef struct RxPipelineNode;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct RwTexCoords;
typedef struct xModelBucket;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct RwResEntry;
typedef struct rxHeapFreeBlock;
typedef struct xBase;
typedef struct xModelInstance;
typedef struct RxPipelineNodeTopSortData;
typedef struct xDynAsset;
typedef struct RpMorphTarget;
typedef struct model_asset;
typedef struct RxNodeDefinition;
typedef struct xLightKit;
typedef struct model_widget;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpLight;
typedef struct RxPipelineCluster;
typedef struct motive_node;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransitionList;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xQuat;
typedef struct xAnimTransition;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef struct RwMatrixTag;
typedef struct xAnimState;
typedef struct widget;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RpAtomic;
typedef struct _class_0;
typedef struct xAnimFile;
typedef struct xLightKitLight;
typedef struct xVec3;
typedef struct render_context;
typedef struct RwSurfaceProperties;
typedef struct xAnimSingle;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xBaseAsset;
typedef enum RxClusterValidityReq;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xAnimEffect;
typedef struct asset;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct basic_rect;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct xModelPool;
typedef enum rxEmbeddedPacketState;
typedef struct RpMaterial;
typedef enum RxClusterForcePresent;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct RxClusterDefinition;
typedef struct motive;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct xMemPool;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RpTriangle;
typedef struct RxNodeMethods;
typedef struct _class_1;
typedef struct RxCluster;
typedef struct _anon0;
typedef struct RxPacket;
typedef struct xSurface;
typedef struct RwRGBAReal;
typedef struct _anon1;
typedef struct RwLinkList;
typedef enum _enum;

typedef int32(*type_1)(RxPipelineNode*);
typedef int32(*type_2)(xBase*, xBase*, uint32, float32*, xBase*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef RwObjectHasFrame*(*type_4)(RwObjectHasFrame*);
typedef void(*type_5)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_7)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef int32(*type_8)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_9)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int32(*type_11)(RxNodeDefinition*);
typedef void(*type_12)(RxNodeDefinition*);
typedef uint32(*type_14)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef uint32(*type_16)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_17)(xAnimPlay*, xAnimState*);
typedef RpClump*(*type_21)(RpClump*, void*);
typedef uint8(*type_22)(widget&, motive&, float32);
typedef RpAtomic*(*type_25)(RpAtomic*);
typedef void(*type_26)(xMemPool*, void*);
typedef void(*type_30)(RwResEntry*);

typedef RwTexCoords* type_0[8];
typedef float32 type_13[16];
typedef float32 type_15[2];
typedef uint8 type_18[2];
typedef xAnimMultiFileEntry type_19[1];
typedef uint32 type_20[4];
typedef float32 type_23[4];
typedef uint16 type_24[3];
typedef int8 type_27[32];
typedef int8 type_28[32];
typedef int8 type_29[16];
typedef int8 type_31[16];
typedef RxCluster type_32[1];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_4 sync;
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_23 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_19 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_27 name;
	type_28 mask;
	uint32 filterAddressing;
	int32 refCount;
};

struct RwTexCoords
{
	float32 u;
	float32 v;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int32 ClipFlags;
	uint32 PipeFlags;
};

struct RpMeshHeader
{
	uint32 flags;
	uint16 numMeshes;
	uint16 serialNum;
	uint32 totalIndicesInMesh;
	uint32 firstMeshOffset;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_30 destroyNotify;
};

struct rxHeapFreeBlock
{
	uint32 size;
	rxHeapBlockHeader* ptr;
};

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_2 eventFunc;
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
	_class_0 anim_coll;
};

struct RxPipelineNodeTopSortData
{
	uint32 numIns;
	uint32 numInsVisited;
	rxReq* req;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct model_asset : asset
{
	uint32 model;
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

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct model_widget : widget
{
	uint32 mid;
	xModelInstance* model;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	uint32 creationAttributes;
};

struct motive_node
{
	motive m;
	motive_node* next;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_16 Conditional;
	type_16 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
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
	type_20 pad;
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
	type_3 BeforeEnter;
	type_5 StateCallback;
	type_7 BeforeAnimMatrices;
};

struct widget
{
	_class_1 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
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
	type_25 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct _class_0
{
	xVec3* verts;
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
	type_18 NumAnims;
	void** RawData;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_13 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	float32 r;
	float32 g;
	float32 b;
	float32 a;
};

struct RwSurfaceProperties
{
	float32 ambient;
	float32 specular;
	float32 diffuse;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_15 BilinearLerp;
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

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_14 Callback;
};

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
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

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_21 callback;
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
	type_0 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct motive
{
	float32* value;
	float32 delta;
	float32 start_delta;
	float32 max_offset;
	float32 offset;
	float32 accel;
	type_22 fp_update;
	void* context;
	uint8 inverse;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	uint32 reserved;
};

struct xMemPool
{
	void* FreeList;
	uint16 NextOffset;
	uint16 Flags;
	void* UsedList;
	type_26 InitCB;
	void* Buffer;
	uint16 Size;
	uint16 NumRealloc;
	uint32 Total;
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

struct RpTriangle
{
	type_24 vertIndex;
	int16 matIndex;
};

struct RxNodeMethods
{
	type_10 nodeBody;
	type_11 nodeInit;
	type_12 nodeTerm;
	type_1 pipelineNodeInit;
	type_6 pipelineNodeTerm;
	type_8 pipelineNodeConfig;
	type_9 configMsgHandler;
};

struct _class_1
{
	uint8 visible;
	uint8 enabled;
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

struct _anon0
{
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_32 clusters;
};

struct xSurface
{
};

struct RwRGBAReal
{
	float32 red;
	float32 green;
	float32 blue;
	float32 alpha;
};

struct _anon1
{
};

struct RwLinkList
{
	RwLLLink link;
};

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_29 buffer;
type_31 buffer;
_anon0 __vt__Q24xhud12model_widget;
_anon1 __vt__Q24xhud6widget;
type_17 xAnimDefaultBeforeEnter;

void render(model_widget* this);
void update(model_widget* this, float32 dt);
uint8 is(model_widget* this, uint32 id);
uint32 type();
void destroy(model_widget* this);
void load(xBase& data, xDynAsset& asset);
xAnimTable* XHUD_AnimTable_Idle();

// render__Q24xhud12model_widgetFv
// Start address: 0x29a3d0
void render(model_widget* this)
{
}

// update__Q24xhud12model_widgetFf
// Start address: 0x29a410
void update(model_widget* this, float32 dt)
{
}

// is__Q24xhud12model_widgetCFUi
// Start address: 0x29a4b0
uint8 is(model_widget* this, uint32 id)
{
	uint32 myid;
	int8 @3734;
}

// type__Q24xhud12model_widgetCFv
// Start address: 0x29a520
uint32 type()
{
}

// destroy__Q24xhud12model_widgetFv
// Start address: 0x29a560
void destroy(model_widget* this)
{
}

// load__Q24xhud12model_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x29a570
void load(xBase& data, xDynAsset& asset)
{
}

// XHUD_AnimTable_Idle__Fv
// Start address: 0x29a5e0
xAnimTable* XHUD_AnimTable_Idle()
{
	xAnimTable* table;
}

