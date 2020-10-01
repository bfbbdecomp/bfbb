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
typedef u32(*type_1)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef s32(*type_2)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef void(*type_5)(RxPipelineNode*);
typedef s32(*type_7)(xBase*, xBase*, u32, f32*, xBase*);
typedef RpAtomic*(*type_9)(RpAtomic*);
typedef s32(*type_10)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_11)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef u32(*type_13)(xAnimTransition*, xAnimSingle*, void*);
typedef s32(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(RxNodeDefinition*);
typedef void(*type_17)(xAnimPlay*, xAnimState*);
typedef void(*type_18)(xAnimState*, xAnimSingle*, void*);
typedef u8(*type_23)(widget&, motive&, f32);
typedef void(*type_26)(xMemPool*, void*);
typedef void(*type_30)(RwResEntry*);

typedef s8 type_6[16];
typedef u16 type_8[3];
typedef RwTexCoords* type_16[8];
typedef u32 type_19[5];
typedef u32 type_20[4];
typedef f32 type_21[2];
typedef f32 type_22[16];
typedef u8 type_24[2];
typedef xAnimMultiFileEntry type_25[1];
typedef s8 type_27[32];
typedef s8 type_28[32];
typedef f32 type_29[4];
typedef xModelInstance* type_31[2];
typedef type_31 type_32[6];
typedef s8 type_33[16];
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
	type_4 BeforeAnimMatrices;
};

struct xMemPool
{
	void* FreeList;
	u16 NextOffset;
	u16 Flags;
	void* UsedList;
	type_26 InitCB;
	void* Buffer;
	u16 Size;
	u16 NumRealloc;
	u32 Total;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_7 eventFunc;
};

struct xDynAsset : xBaseAsset
{
	u32 type;
	u16 version;
	u16 handle;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct unit_meter_widget : meter_widget
{
	unit_meter_asset res;
	type_32 model;
	f32 anim_time;
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
	_class_0 anim_coll;
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

struct RpTriangle
{
	type_8 vertIndex;
	s16 matIndex;
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
	type_17 BeforeEnter;
	type_18 StateCallback;
	type_4 BeforeAnimMatrices;
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
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_1 Callback;
};

struct _anon0
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
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
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_29 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
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

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_30 destroyNotify;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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
	type_24 NumAnims;
	void** RawData;
};

struct RwRGBA
{
	u8 red;
	u8 green;
	u8 blue;
	u8 alpha;
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
	type_16 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_13 Conditional;
	type_13 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
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
	u32 size;
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
	u32 slotIndex;
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
	s16 refCount;
	s16 pad;
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
	u32 filterAddressing;
	s32 refCount;
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

struct RpLight
{
	RwObjectHasFrame object;
	f32 radius;
	RwRGBAReal color;
	f32 minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	u16 lightFrame;
	u16 pad;
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
	f32 r;
	f32 g;
	f32 b;
	f32 a;
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
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

struct meter_asset : asset
{
	f32 start_value;
	f32 min_value;
	f32 max_value;
	f32 increment_time;
	f32 decrement_time;
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
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
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
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_21 BilinearLerp;
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

struct RwSphere
{
	RwV3d center;
	f32 radius;
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
	u32 type;
	RwRGBAReal color;
	type_22 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct _class_1
{
	u32 start_increment;
	u32 increment;
	u32 start_decrement;
	u32 decrement;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct meter_widget : widget
{
	meter_asset& res;
	f32 value;
	f32 min_value;
	f32 max_value;
	f32 end_value;
	f32 value_vel;
	f32 value_accel;
	f32 ping_delay;
	f32 pitch;
	sound_queue pings;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct motive
{
	f32* value;
	f32 delta;
	f32 start_delta;
	f32 max_offset;
	f32 offset;
	f32 accel;
	type_23 fp_update;
	void* context;
	u8 inverse;
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

struct model_info
{
	u32 id;
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
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
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
	u32 fill_forward;
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

struct sound_queue
{
	type_19 _playing;
	s32 head;
	s32 tail;
};

struct RxPacket
{
	u16 flags;
	u16 numClusters;
	RxPipeline* pipeline;
	u32* inputToClusterSlot;
	u32* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_34 clusters;
};

struct _anon2
{
};

struct _class_2
{
	u8 visible;
	u8 enabled;
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_33 buffer;
type_6 buffer;
f32 tweak_anim_time_delta;
_anon2 __vt__Q24xhud17unit_meter_widget;
_anon0 __vt__Q24xhud6widget;
_anon1 __vt__Q24xhud12meter_widget;

void render(unit_meter_widget* this);
void update(unit_meter_widget* this, f32 dt);
void setup(unit_meter_widget* this);
u8 is(unit_meter_widget* this, u32 id);
u32 type();
void destroy(unit_meter_widget* this);
void* __ct(unit_meter_widget* this, unit_meter_asset& a);
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud17unit_meter_widgetFv
// Start address: 0x29a660
void render(unit_meter_widget* this)
{
	render_context unitrc;
	s32 units;
	s32 i;
	s32 which;
}

// update__Q24xhud17unit_meter_widgetFf
// Start address: 0x29a860
void update(unit_meter_widget* this, f32 dt)
{
	s32 units;
	s32 i;
	s32 which;
	xModelInstance* m;
	f32 duration;
	f32 time;
}

// setup__Q24xhud17unit_meter_widgetFv
// Start address: 0x29aa40
void setup(unit_meter_widget* this)
{
}

// is__Q24xhud17unit_meter_widgetCFUi
// Start address: 0x29aa50
u8 is(unit_meter_widget* this, u32 id)
{
	u32 myid;
	s8 @3861;
}

// type__Q24xhud17unit_meter_widgetCFv
// Start address: 0x29aac0
u32 type()
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
	s32 i;
	s32 j;
	u8 registered;
}

// load__Q24xhud17unit_meter_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x29ac00
void load(xBase& data, xDynAsset& asset)
{
}

