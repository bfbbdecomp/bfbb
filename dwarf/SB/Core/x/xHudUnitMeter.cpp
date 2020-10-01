typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct xAnimPlay;
typedef struct xMemPool;
typedef struct xBase;
typedef struct xDynAsset;
typedef struct xQuat;
typedef struct xVec3;
typedef struct unit_meter_widget;
typedef struct xModelInstance;
typedef struct rxHeapFreeBlock;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpTriangle;
typedef struct xAnimState;
typedef struct RxNodeDefinition;
typedef struct RpAtomic;
typedef struct xAnimEffect;
typedef struct _anon0;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct asset;
typedef struct RxPipelineNodeParam;
typedef enum _enum;
typedef struct xLinkAsset;
typedef struct RxHeap;
typedef struct RwResEntry;
typedef struct xModelPool;
typedef struct xAnimFile;
typedef struct RwRGBA;
typedef struct RpGeometry;
typedef struct xAnimTable;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct rxHeapBlockHeader;
typedef struct RpClump;
typedef struct RxPipelineRequiresCluster;
typedef struct motive_node;
typedef struct xSurface;
typedef struct RpMaterial;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct rxReq;
typedef struct RpMeshHeader;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xModelBucket;
typedef struct RpMorphTarget;
typedef struct RpLight;
typedef enum RxNodeDefEditable;
typedef struct render_context;
typedef enum RxClusterValid;
typedef struct xLightKit;
typedef struct meter_asset;
typedef struct widget;
typedef struct xBaseAsset;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef struct basic_rect;
typedef struct xAnimMultiFileEntry;
typedef struct RxClusterDefinition;
typedef struct xAnimActiveEffect;
typedef struct xAnimSingle;
typedef struct RwSphere;
typedef struct _class_0;
typedef struct _anon1;
typedef struct RwTexDictionary;
typedef struct xLightKitLight;
typedef struct _class_1;
typedef struct RxOutputSpec;
typedef struct RpInterpolator;
typedef struct meter_widget;
typedef struct xAnimMultiFileBase;
typedef struct motive;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct model_info;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RpMaterialList;
typedef struct RxNodeMethods;
typedef struct unit_meter_asset;
typedef struct RxCluster;
typedef struct sound_queue;
typedef struct RxPacket;
typedef struct _anon2;
typedef struct _class_2;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef RpClump*(*type_0)(RpClump*, void*);
typedef uint32(*type_1)(uint32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int32(*type_2)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(xAnimPlay*, xQuat*, xVec3*, int32);
typedef void(*type_5)(RxPipelineNode*);
typedef int32(*type_7)(xBase*, xBase*, uint32, float32*, xBase*);
typedef RpAtomic*(*type_9)(RpAtomic*);
typedef int32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef uint32(*type_11)(RxPipelineNode*, uint32, uint32, void*);
typedef int32(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef uint32(*type_13)(xAnimTransition*, xAnimSingle*, void*);
typedef int32(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(RxNodeDefinition*);
typedef void(*type_17)(xAnimPlay*, xAnimState*);
typedef void(*type_18)(xAnimState*, xAnimSingle*, void*);
typedef uint8(*type_23)(widget&, motive&, float32);
typedef void(*type_26)(xMemPool*, void*);
typedef void(*type_30)(RwResEntry*);

typedef int8 type_6[16];
typedef uint16 type_8[3];
typedef RwTexCoords* type_16[8];
typedef uint32 type_19[5];
typedef uint32 type_20[4];
typedef float32 type_21[2];
typedef float32 type_22[16];
typedef uint8 type_24[2];
typedef xAnimMultiFileEntry type_25[1];
typedef int8 type_27[32];
typedef int8 type_28[32];
typedef float32 type_29[4];
typedef xModelInstance* type_31[2];
typedef type_31 type_32[6];
typedef int8 type_33[16];
typedef RxCluster type_34[1];
typedef model_info type_35[2];

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
	type_4 BeforeAnimMatrices;
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

struct xBase
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
	xLinkAsset* link;
	type_7 eventFunc;
};

struct xDynAsset : xBaseAsset
{
	uint32 type;
	uint16 version;
	uint16 handle;
};

struct xQuat
{
	xVec3 v;
	float32 s;
};

struct xVec3
{
	float32 x;
	float32 y;
	float32 z;
};

struct unit_meter_widget : meter_widget
{
	unit_meter_asset res;
	type_32 model;
	float32 anim_time;
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

struct RpTriangle
{
	type_8 vertIndex;
	int16 matIndex;
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
	type_17 BeforeEnter;
	type_18 StateCallback;
	type_4 BeforeAnimMatrices;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_9 renderCallBack;
	RpInterpolator interpolator;
	uint16 renderFrame;
	uint16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	uint32 Flags;
	float32 StartTime;
	float32 EndTime;
	type_1 Callback;
};

struct _anon0
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	uint32 size;
	rxHeapSuperBlockDescriptor* next;
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

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

struct xLinkAsset
{
	uint16 srcEvent;
	uint16 dstEvent;
	uint32 dstAssetID;
	type_29 param;
	uint32 paramWidgetAssetID;
	uint32 chkAssetID;
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

struct RwResEntry
{
	RwLLLink link;
	int32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_30 destroyNotify;
};

struct xModelPool
{
	xModelPool* Next;
	uint32 NumMatrices;
	xModelInstance* List;
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
	type_24 NumAnims;
	void** RawData;
};

struct RwRGBA
{
	uint8 red;
	uint8 green;
	uint8 blue;
	uint8 alpha;
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
	type_16 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_13 Conditional;
	type_13 Callback;
	uint32 Flags;
	uint32 UserFlags;
	float32 SrcTime;
	float32 DestTime;
	uint16 Priority;
	uint16 QueuePriority;
	float32 BlendRecip;
	uint16* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	uint32 size;
	rxHeapFreeBlock* freeEntry;
	type_20 pad;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_0 callback;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	uint32 slotIndex;
};

struct motive_node
{
	motive m;
	motive_node* next;
};

struct xSurface
{
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_25 Files;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKit
{
	uint32 tagID;
	uint32 groupID;
	uint32 lightCount;
	xLightKitLight* lightList;
};

struct meter_asset : asset
{
	float32 start_value;
	float32 min_value;
	float32 max_value;
	float32 increment_time;
	float32 decrement_time;
	_class_1 sound;
};

struct widget
{
	_class_2 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

struct xBaseAsset
{
	uint32 id;
	uint8 baseType;
	uint8 linkCount;
	uint16 baseFlags;
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

struct basic_rect
{
	float32 x;
	float32 y;
	float32 w;
	float32 h;
};

struct xAnimMultiFileEntry
{
	uint32 ID;
	xAnimFile* File;
};

struct RxClusterDefinition
{
	int8* name;
	uint32 defaultStride;
	uint32 defaultAttributes;
	int8* attributeSet;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	uint32 Handle;
};

struct xAnimSingle
{
	uint32 SingleFlags;
	xAnimState* State;
	float32 Time;
	float32 CurrentSpeed;
	type_21 BilinearLerp;
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

struct RwSphere
{
	RwV3d center;
	float32 radius;
};

struct _class_0
{
	xVec3* verts;
};

struct _anon1
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xLightKitLight
{
	uint32 type;
	RwRGBAReal color;
	type_22 matrix;
	float32 radius;
	float32 angle;
	RpLight* platLight;
};

struct _class_1
{
	uint32 start_increment;
	uint32 increment;
	uint32 start_decrement;
	uint32 decrement;
};

struct RxOutputSpec
{
	int8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct meter_widget : widget
{
	meter_asset& res;
	float32 value;
	float32 min_value;
	float32 max_value;
	float32 end_value;
	float32 value_vel;
	float32 value_accel;
	float32 ping_delay;
	float32 pitch;
	sound_queue pings;
};

struct xAnimMultiFileBase
{
	uint32 Count;
};

struct motive
{
	float32* value;
	float32 delta;
	float32 start_delta;
	float32 max_offset;
	float32 offset;
	float32 accel;
	type_23 fp_update;
	void* context;
	uint8 inverse;
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

struct model_info
{
	uint32 id;
	xVec3 loc;
	xVec3 size;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int32 numMaterials;
	int32 space;
};

struct RxNodeMethods
{
	type_12 nodeBody;
	type_14 nodeInit;
	type_15 nodeTerm;
	type_2 pipelineNodeInit;
	type_5 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_11 configMsgHandler;
};

struct unit_meter_asset : meter_asset
{
	type_35 model;
	xVec3 offset;
	uint32 fill_forward;
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

struct sound_queue
{
	type_19 _playing;
	int32 head;
	int32 tail;
};

struct RxPacket
{
	uint16 flags;
	uint16 numClusters;
	RxPipeline* pipeline;
	uint32* inputToClusterSlot;
	uint32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_34 clusters;
};

struct _anon2
{
};

struct _class_2
{
	uint8 visible;
	uint8 enabled;
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

basic_rect screen_bounds;
basic_rect default_adjust;
type_33 buffer;
type_6 buffer;
float32 tweak_anim_time_delta;
_anon2 __vt__Q24xhud17unit_meter_widget;
_anon0 __vt__Q24xhud6widget;
_anon1 __vt__Q24xhud12meter_widget;

void render(unit_meter_widget* this);
void update(unit_meter_widget* this, float32 dt);
void setup(unit_meter_widget* this);
uint8 is(unit_meter_widget* this, uint32 id);
uint32 type();
void destroy(unit_meter_widget* this);
void* __ct(unit_meter_widget* this, unit_meter_asset& a);
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud17unit_meter_widgetFv
// Start address: 0x29a660
void render(unit_meter_widget* this)
{
	render_context unitrc;
	int32 units;
	int32 i;
	int32 which;
}

// update__Q24xhud17unit_meter_widgetFf
// Start address: 0x29a860
void update(unit_meter_widget* this, float32 dt)
{
	int32 units;
	int32 i;
	int32 which;
	xModelInstance* m;
	float32 duration;
	float32 time;
}

// setup__Q24xhud17unit_meter_widgetFv
// Start address: 0x29aa40
void setup(unit_meter_widget* this)
{
}

// is__Q24xhud17unit_meter_widgetCFUi
// Start address: 0x29aa50
uint8 is(unit_meter_widget* this, uint32 id)
{
	uint32 myid;
	int8 @3861;
}

// type__Q24xhud17unit_meter_widgetCFv
// Start address: 0x29aac0
uint32 type()
{
}

// destroy__Q24xhud17unit_meter_widgetFv
// Start address: 0x29ab00
void destroy(unit_meter_widget* this)
{
}

// __ct__Q24xhud17unit_meter_widgetFRCQ24xhud16unit_meter_asset
// Start address: 0x29ab10
void* __ct(unit_meter_widget* this, unit_meter_asset& a)
{
	int32 i;
	int32 j;
	uint8 registered;
}

// load__Q24xhud17unit_meter_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x29ac00
void load(xBase& data, xDynAsset& asset)
{
}

