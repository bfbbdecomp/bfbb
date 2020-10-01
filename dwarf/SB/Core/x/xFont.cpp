typedef struct xfont;
typedef struct jot;
typedef struct font_asset;
typedef struct xtextbox;
typedef struct model_tag_context;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwSky2DVertex;
typedef struct RwImage;
typedef struct RxPipelineNode;
typedef struct tag_entry;
typedef struct xQuat;
typedef struct model_pool;
typedef struct RwTexCoords;
typedef struct RpMaterial;
typedef struct RwV3d;
typedef struct RpTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct iColor_tag;
typedef struct RxPipeline;
typedef struct jot_line;
typedef struct xTextAsset;
typedef struct xSurface;
typedef struct RwTexture;
typedef struct tag_type;
typedef struct substr;
typedef struct RxPipelineRequiresCluster;
typedef struct split_tag;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct xVec2;
typedef struct xAnimTransitionList;
typedef struct xModelBucket;
typedef struct font_data;
typedef struct xTimerAsset;
typedef struct RpMorphTarget;
typedef struct RwRaster;
typedef struct xAnimTable;
typedef struct basic_rect_0;
typedef struct xAnimTransition;
typedef struct layout;
typedef struct RpLight;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct xModelInstance;
typedef struct tag_entry_list;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct basic_rect_1;
typedef struct rxReq;
typedef struct xLightKit;
typedef enum RxClusterValidityReq;
typedef struct xAnimState;
typedef struct xLightKitLight;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xMat4x3;
typedef struct xAnimFile;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xAnimSingle;
typedef struct rxHeapFreeBlock;
typedef struct _class_0;
typedef struct tex_tag_context;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct model_cache_entry;
typedef struct xAnimMultiFileBase;
typedef struct model_args;
typedef struct RpAtomic;
typedef enum RxClusterForcePresent;
typedef struct tex_args;
typedef struct _class_1;
typedef struct xAnimEffect;
typedef struct RpInterpolator;
typedef struct RxClusterDefinition;
typedef enum _enum_0;
typedef struct tl_cache_entry;
typedef struct xLinkAsset;
typedef struct xAnimMultiFile;
typedef struct RwSphere;
typedef struct xAnimPlay;
typedef struct RwTexDictionary;
typedef struct xTimer;
typedef struct RxOutputSpec;
typedef struct _class_2;
typedef struct RpMaterialList;
typedef struct _class_3;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xModelPool;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpClump;
typedef struct RxIoSpec;
typedef struct RpGeometry;
typedef enum RwTextureFilterMode;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RwSky2DVertexFields;
typedef struct RxNodeDefinition;
typedef struct callback;
typedef struct xBase;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct _class_4;
typedef enum _enum_1;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct _class_5;
typedef struct xBaseAsset;

typedef void(*type_1)(xAnimPlay*, xAnimState*);
typedef void(*type_2)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_5)(xAnimPlay*, xQuat*, xVec3*, s32);
typedef u32(*type_6)(RxPipelineNode*, u32, u32, void*);
typedef s32(*type_9)(RxPipelineNode*, RxPipelineNodeParam*);
typedef s32(*type_12)(RxNodeDefinition*);
typedef void(*type_13)(RxNodeDefinition*);
typedef s32(*type_14)(RxPipelineNode*);
typedef void(*type_15)(RxPipelineNode*);
typedef s32(*type_17)(RxPipelineNode*, RxPipeline*);
typedef u32(*type_23)(u32, xAnimActiveEffect*, xAnimSingle*, void*);
typedef u32(*type_27)(xAnimTransition*, xAnimSingle*, void*);
typedef RpClump*(*type_37)(RpClump*, void*);
typedef void(*type_38)(xMemPool*, void*);
typedef void(*type_39)(jot&, xtextbox&, f32, f32);
typedef void(*type_44)(jot&, xtextbox&, xtextbox&);
typedef void(*type_45)(RwResEntry*);
typedef s32(*type_46)(xBase*, xBase*, u32, f32*, xBase*);
typedef void(*type_50)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef RpAtomic*(*type_53)(RpAtomic*);
typedef RwObjectHasFrame*(*type_55)(RwObjectHasFrame*);

typedef model_cache_entry type_0[8];
typedef _class_5 type_3[127];
typedef s8 type_4[16];
typedef RwMatrixTag type_7[8];
typedef RwTexCoords* type_8[8];
typedef xModelInstance type_10[8];
typedef tl_cache_entry type_11[3];
typedef u8 type_16[256];
typedef basic_rect_1 type_18[127];
typedef basic_rect_1 type_19[127];
typedef xVec2 type_20[127];
typedef f32 type_21[16];
typedef substr type_22[32];
typedef s8* type_24[3];
typedef tag_entry type_25[16];
typedef f32 type_26[2];
typedef u32 type_28[4];
typedef u8 type_29[2];
typedef xAnimMultiFileEntry type_30[1];
typedef RwSky2DVertex type_31[120];
typedef u8 type_32[256];
typedef u32 type_33[4096];
typedef font_data type_34[4];
typedef f32 type_35[4];
typedef _class_3 type_36[16];
typedef s8 type_40[32];
typedef tag_type type_41[128];
typedef s8 type_42[32];
typedef type_41 type_43[2];
typedef jot type_47[512];
typedef jot_line type_48[128];
typedef RwSky2DVertex type_49[4];
typedef u16 type_51[3];
typedef RxCluster type_52[1];
typedef u8 type_54[1024];
typedef u16 type_56[64];
typedef u8 type_57[128];
typedef <unknown type (0xa510)> type_58[4];
typedef s8 type_59[16];
typedef s8 type_60[64];
typedef font_asset type_61[4];

struct xfont
{
	u32 id;
	f32 width;
	f32 height;
	f32 space;
	iColor_tag color;
	basic_rect_1 clip;
};

struct jot
{
	substr s;
	_class_0 flag;
	u16 context_size;
	void* context;
	basic_rect_1 bounds;
	basic_rect_1 render_bounds;
	callback* cb;
	tag_type* tag;
};

struct font_asset
{
	u32 tex_id;
	u16 u;
	u16 v;
	u8 du;
	u8 dv;
	u8 line_size;
	u8 baseline;
	_class_4 space;
	u32 flags;
	type_57 char_set;
	type_3 char_pos;
};

struct xtextbox
{
	xfont font;
	basic_rect_1 bounds;
	u32 flags;
	f32 line_space;
	f32 tab_stop;
	f32 left_indent;
	f32 right_indent;
	callback* cb;
	void* context;
	s8** texts;
	u32* text_sizes;
	u32 texts_size;
	substr text;
	u32 text_hash;
};

struct model_tag_context
{
	xModelInstance* model;
	xVec3 rot;
	basic_rect_1 dst;
	xSphere o;
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

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct RwImage
{
	s32 flags;
	s32 width;
	s32 height;
	s32 depth;
	s32 stride;
	u8* cpPixels;
	RwRGBA* palette;
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

struct tag_entry
{
	substr name;
	s8 op;
	substr* args;
	u32 args_size;
};

struct xQuat
{
	xVec3 v;
	f32 s;
};

struct model_pool
{
	type_7 mat;
	type_10 model;
};

struct RwTexCoords
{
	f32 u;
	f32 v;
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

struct RwV3d
{
	f32 x;
	f32 y;
	f32 z;
};

struct RpTriangle
{
	type_51 vertIndex;
	s16 matIndex;
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
	type_28 pad;
};

struct iColor_tag
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
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

struct jot_line
{
	basic_rect_1 bounds;
	f32 baseline;
	u32 first;
	u32 last;
	u8 page_break;
};

struct xTextAsset
{
	u32 len;
};

struct xSurface
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_40 name;
	type_42 mask;
	u32 filterAddressing;
	s32 refCount;
};

struct tag_type
{
	substr name;
	type_50 parse_tag;
	type_50 reset_tag;
	void* context;
};

struct substr
{
	s8* text;
	u32 size;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	u32 slotIndex;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct RpMeshHeader
{
	u32 flags;
	u16 numMeshes;
	u16 serialNum;
	u32 totalIndicesInMesh;
	u32 firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	s32 size;
	void* owner;
	RwResEntry** ownerRef;
	type_45 destroyNotify;
};

struct xVec2
{
	f32 x;
	f32 y;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	s32 ClipFlags;
	u32 PipeFlags;
};

struct font_data
{
	font_asset* asset;
	u32 index_max;
	type_16 char_index;
	f32 iwidth;
	f32 iheight;
	type_18 tex_bounds;
	type_19 bounds;
	type_20 dstfrac;
	RwTexture* texture;
	RwRaster* raster;
};

struct xTimerAsset : xBaseAsset
{
	f32 seconds;
	f32 randomRange;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct basic_rect_0
{
	s32 x;
	s32 y;
	s32 w;
	s32 h;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_27 Conditional;
	type_27 Callback;
	u32 Flags;
	u32 UserFlags;
	f32 SrcTime;
	f32 DestTime;
	u16 Priority;
	u16 QueuePriority;
	f32 BlendRecip;
	u16* BlendOffset;
};

struct layout
{
	xtextbox tb;
	type_47 _jots;
	u32 _jots_size;
	type_48 _lines;
	u32 _lines_size;
	type_54 context_buffer;
	u32 context_buffer_size;
	type_56 dynamics;
	u32 dynamics_size;
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

struct xVec3
{
	f32 x;
	f32 y;
	f32 z;
};

struct RwSurfaceProperties
{
	f32 ambient;
	f32 specular;
	f32 diffuse;
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
	_class_1 anim_coll;
};

struct tag_entry_list
{
	tag_entry* entries;
	u32 size;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	u32 size;
	rxHeapSuperBlockDescriptor* next;
};

struct basic_rect_1
{
	f32 x;
	f32 y;
	f32 w;
	f32 h;
};

struct rxReq
{
};

struct xLightKit
{
	u32 tagID;
	u32 groupID;
	u32 lightCount;
	xLightKitLight* lightList;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_2 StateCallback;
	type_5 BeforeAnimMatrices;
};

struct xLightKitLight
{
	u32 type;
	RwRGBAReal color;
	type_21 matrix;
	f32 radius;
	f32 angle;
	RpLight* platLight;
};

struct xAnimMultiFileEntry
{
	u32 ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	u32 Handle;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	u32 pad3;
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
	type_29 NumAnims;
	void** RawData;
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

struct xAnimSingle
{
	u32 SingleFlags;
	xAnimState* State;
	f32 Time;
	f32 CurrentSpeed;
	type_26 BilinearLerp;
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

struct rxHeapFreeBlock
{
	u32 size;
	rxHeapBlockHeader* ptr;
};

struct _class_0
{
	union
	{
		u8 invisible;
		u8 ethereal;
		u8 merge;
		u8 word_break;
		u8 word_end;
		u8 line_break;
		u8 stop;
		u8 tab;
	};
	union
	{
		u8 insert;
		u8 dynamic;
		u8 page_break;
		u8 stateful;
	};
	u16 dummy;
};

struct tex_tag_context
{
	RwRaster* raster;
	f32 rot;
	basic_rect_1 src;
	basic_rect_1 dst;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xSphere
{
	xVec3 center;
	f32 r;
};

struct model_cache_entry
{
	u32 id;
	u32 order;
	xModelInstance* model;
};

struct xAnimMultiFileBase
{
	u32 Count;
};

struct model_args
{
	xModelInstance* model;
	xVec3 rot;
	basic_rect_1 dst;
	xVec2 off;
	_enum_0 scale;
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
	type_53 renderCallBack;
	RpInterpolator interpolator;
	u16 renderFrame;
	u16 pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct tex_args
{
	RwRaster* raster;
	f32 rot;
	basic_rect_1 src;
	basic_rect_1 dst;
	xVec2 off;
	_enum_1 scale;
};

struct _class_1
{
	xVec3* verts;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	u32 Flags;
	f32 StartTime;
	f32 EndTime;
	type_23 Callback;
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

struct RxClusterDefinition
{
	s8* name;
	u32 defaultStride;
	u32 defaultAttributes;
	s8* attributeSet;
};

enum _enum_0
{
	SCALE_FONT,
	SCALE_SCREEN,
	SCALE_SIZE
};

struct tl_cache_entry
{
	u32 used;
	s32 last_used;
	layout tl;
};

struct xLinkAsset
{
	u16 srcEvent;
	u16 dstEvent;
	u32 dstAssetID;
	type_35 param;
	u32 paramWidgetAssetID;
	u32 chkAssetID;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_30 Files;
};

struct RwSphere
{
	RwV3d center;
	f32 radius;
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
	type_5 BeforeAnimMatrices;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xTimer : xBase
{
	xTimerAsset* tasset;
	u8 state;
	u8 runsInPause;
	u16 flags;
	f32 secondsLeft;
};

struct RxOutputSpec
{
	s8* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _class_2
{
	s32 fogenable;
	s32 vertexalphaenable;
	s32 zwriteenable;
	s32 ztestenable;
	u32 srcblend;
	u32 destblend;
	u32 shademode;
	RwRaster* textureraster;
	RwTextureFilterMode filter;
};

struct RpMaterialList
{
	RpMaterial** materials;
	s32 numMaterials;
	s32 space;
};

struct _class_3
{
	s8* s;
	s8* end;
};

struct xMat3x3
{
	xVec3 right;
	s32 flags;
	xVec3 up;
	u32 pad1;
	xVec3 at;
	u32 pad2;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	u32 reserved;
};

struct xModelPool
{
	xModelPool* Next;
	u32 NumMatrices;
	xModelInstance* List;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_37 callback;
};

struct RxIoSpec
{
	u32 numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	u32 numOutputs;
	RxOutputSpec* outputs;
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
	type_8 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

enum RwTextureFilterMode
{
	rwFILTERNAFILTERMODE,
	rwFILTERNEAREST,
	rwFILTERLINEAR,
	rwFILTERMIPNEAREST,
	rwFILTERMIPLINEAR,
	rwFILTERLINEARMIPNEAREST,
	rwFILTERLINEARMIPLINEAR,
	rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 0x7fffffff
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

struct RxNodeMethods
{
	type_9 nodeBody;
	type_12 nodeInit;
	type_13 nodeTerm;
	type_14 pipelineNodeInit;
	type_15 pipelineNodeTerm;
	type_17 pipelineNodeConfig;
	type_6 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	u32 creationAttributes;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	f32 camVertex_z;
	f32 u;
	f32 v;
	f32 recipZ;
	f32 pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	f32 pad2;
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

struct callback
{
	type_39 render;
	type_44 layout_update;
	type_44 render_update;
};

struct xBase
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
	xLinkAsset* link;
	type_46 eventFunc;
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
	type_52 clusters;
};

struct _class_4
{
	s16 x;
	s16 y;
};

enum _enum_1
{
	SCALE_FONT,
	SCALE_SCREEN,
	SCALE_SIZE,
	SCALE_FONT_WIDTH,
	SCALE_FONT_HEIGHT,
	SCALE_SCREEN_WIDTH,
	SCALE_SCREEN_HEIGHT
};

struct RwRGBAReal
{
	f32 red;
	f32 green;
	f32 blue;
	f32 alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_55 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_58 qWords;
};

struct _class_5
{
	u8 offset;
	u8 size;
};

struct xBaseAsset
{
	u32 id;
	u8 baseType;
	u8 linkCount;
	u16 baseFlags;
};

basic_rect_1 screen_bounds;
basic_rect_1 default_adjust;
type_59 buffer;
type_4 buffer;
type_24 default_font_texture;
type_61 default_font_assets;
type_34 active_fonts;
u32 active_fonts_size;
type_31 vert_buffer;
u32 vert_buffer_used;
f32 rcz;
f32 nsz;
type_0 model_cache;
u8 model_cache_inited;
_class_2 oldrs;
substr text_delims;
tex_args def_tex_args;
model_args def_model_args;
type_11 tl_cache;
callback text_cb;
u8 disable_text_stats;
type_43 format_tags_buffer;
tag_type* format_tags;
u32 format_tags_size;
type_33 ourGlobals;
basic_rect_1 m_Unit;
xVec3 m_Null;
basic_rect_1 m_Null;
iColor_tag g_WHITE;
xMat4x3 g_I3;
u32 gActiveHeap;

void render_fill_rect(basic_rect_1& bounds, iColor_tag color);
void set_rect_vert(RwSky2DVertex& vert, f32 x, f32 y, f32 z, iColor_tag c, f32 rcz);
tag_type* find_format_tag(substr& s, s32& index);
void register_tags(tag_type* t, u32 size);
void parse_tag_timer(jot& j, split_tag& ti);
void parse_tag_pop(split_tag& ti);
void parse_tag_insert_hash(jot& j, split_tag& ti);
void parse_tag_insert(jot& j, split_tag& ti);
void reset_tag_tex();
void parse_tag_tex(jot& a, xtextbox& tb, split_tag& ti);
void render_tag_tex(jot& j, xtextbox& tb, f32 x, f32 y);
void reset_tag_model();
void parse_tag_model(jot& a, xtextbox& tb, split_tag& ti);
void render_tag_model(jot& j, xtextbox& tb, f32 x, f32 y);
void parse_tag_page_break(jot& a);
void parse_tag_word_break(jot& a);
void parse_tag_tab(jot& a);
void parse_tag_newline(jot& a, xtextbox& tb);
void parse_tag_open_curly(jot& a, xtextbox& tb, split_tag& ti);
void reset_tag_yjustify(jot& a);
void parse_tag_yjustify(jot& a, split_tag& ti);
void update_tag_reset_yjustify(xtextbox& tb, xtextbox& ctb);
void update_tag_yjustify(jot& j, xtextbox& tb);
void reset_tag_xjustify(jot& a);
void parse_tag_xjustify(jot& a, split_tag& ti);
void update_tag_reset_xjustify(xtextbox& tb, xtextbox& ctb);
void update_tag_xjustify(jot& j, xtextbox& tb);
void reset_tag_wrap(jot& a);
void parse_tag_wrap(jot& a, split_tag& ti);
void update_tag_reset_wrap(xtextbox& tb, xtextbox& ctb);
void update_tag_wrap(jot& j, xtextbox& tb);
void reset_tag_font(jot& a);
void parse_tag_font(jot& a, split_tag& ti);
void update_tag_reset_font(xtextbox& tb, xtextbox& ctb);
void update_tag_font(jot& j, xtextbox& tb);
void reset_tag_color(jot& a);
void parse_tag_color(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_color(xtextbox& tb, xtextbox& ctb);
void update_tag_color(jot& j, xtextbox& tb);
void reset_tag_all(jot& j);
void update_tag_reset_all(xtextbox& tb, xtextbox& ctb);
void reset_tag_yspace(jot& a);
void parse_tag_yspace(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_yspace(xtextbox& tb, xtextbox& ctb);
void update_tag_yspace(jot& j, xtextbox& tb);
void reset_tag_xspace(jot& a);
void parse_tag_xspace(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_xspace(xtextbox& tb, xtextbox& ctb);
void update_tag_xspace(jot& j, xtextbox& tb);
void reset_tag_tab_stop(jot& a);
void parse_tag_tab_stop(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_tab_stop(xtextbox& tb, xtextbox& ctb);
void update_tag_tab_stop(jot& j, xtextbox& tb);
void reset_tag_right_indent(jot& a);
void parse_tag_right_indent(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_right_indent(xtextbox& tb, xtextbox& ctb);
void update_tag_right_indent(jot& j, xtextbox& tb);
void reset_tag_left_indent(jot& a);
void parse_tag_left_indent(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_left_indent(xtextbox& tb, xtextbox& ctb);
void update_tag_left_indent(jot& j, xtextbox& tb);
void reset_tag_height(jot& a);
void parse_tag_height(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_height(xtextbox& tb, xtextbox& ctb);
void update_tag_height(jot& j, xtextbox& tb);
void reset_tag_width(jot& a);
void parse_tag_width(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_width(xtextbox& tb, xtextbox& ctb);
void update_tag_width(jot& j, xtextbox& tb);
void reset_tag_blue(jot& a);
void parse_tag_blue(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_blue(xtextbox& tb, xtextbox& ctb);
void update_tag_blue(jot& j, xtextbox& tb);
void reset_tag_green(jot& a);
void parse_tag_green(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_green(xtextbox& tb, xtextbox& ctb);
void update_tag_green(jot& j, xtextbox& tb);
void reset_tag_red(jot& a);
void parse_tag_red(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_red(xtextbox& tb, xtextbox& ctb);
void update_tag_red(jot& j, xtextbox& tb);
void reset_tag_alpha(jot& a);
void parse_tag_alpha(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_alpha(xtextbox& tb, xtextbox& ctb);
void update_tag_alpha(jot& j, xtextbox& tb);
u8 changed(layout* this, xtextbox& ctb);
f32 yextent(layout* this, f32 max, s32& size, s32 begin_jot, s32 end_jot);
void render(layout* this, xtextbox& ctb, s32 begin_jot, s32 end_jot);
void calc(layout* this, xtextbox& ctb, u32 start_text);
u8 fit_line(layout* this);
void bound_line(layout* this, jot_line& line);
void merge_line(layout* this, jot_line& line);
void trim_line(layout* this, jot_line& line);
void clear(layout* this);
void refresh_end(layout* this, xtextbox& tb);
void refresh(layout* this, xtextbox& tb, u8 force);
void clear_layout_cache();
u32 read_list(tag_entry& e, s32* v, u32 vsize);
u32 read_list(tag_entry& e, f32* v, u32 vsize);
tag_entry* find_entry(tag_entry_list& el, substr& name);
tag_entry_list read_tag(substr& s);
f32 yextent(f32 max, s32& size, layout& l, s32 begin_jot, s32 end_jot);
void render(xtextbox* this, layout& l, s32 begin_jot, s32 end_jot);
layout& temp_layout(xtextbox* this, u8 cache);
void set_text(xtextbox* this, s8** texts, u32* text_sizes, u32 size);
void set_text(xtextbox* this, s8** texts, u32 size);
void set_text(xtextbox* this, s8* text);
void text_render(jot& j, xtextbox& tb, f32 x, f32 y);
void start_layout();
void load_model_args(model_args& ma, substr& s);
void load_tex_args(tex_args& ta, substr& s);
s8* parse_next_text_jot(jot& a, xtextbox& tb, s8* text);
s8* parse_next_tag_jot(jot& a, xtextbox& tb, xtextbox& ctb, s8* text, u32 text_size);
u32 parse_split_tag(split_tag& ti);
void irender(xfont* this, s8* text, u32 text_size, f32 x, f32 y);
void irender(xfont* this, s8* text, f32 x, f32 y);
void stop_render();
void start_render(xfont* this);
basic_rect_1 bounds(xfont* this, s8* text, u32 text_size, f32 max_width, u32& size);
basic_rect_1 bounds(xfont* this, s8* text);
void restore_render_state();
void set_render_state(RwRaster* raster);
void init();
xModelInstance* load_model(u32 id);
void init_model_cache();
void tex_render(basic_rect_1& src, basic_rect_1& dst, basic_rect_1& clip, iColor_tag color);
u8 init_font_data(font_data& fd);
u8 reset_font_spacing(font_asset& a);
basic_rect_0 find_bounds(iColor_tag* bits, basic_rect_0& r, s32 pitch);

// render_fill_rect__FRC13basic_rect<f>10iColor_tag
// Start address: 0x1daf50
void render_fill_rect(basic_rect_1& bounds, iColor_tag color)
{
	f32 rcz;
	f32 nsz;
	type_49 vert;
	basic_rect_1 r;
}

// set_rect_vert__19@unnamed@xFont_cpp@FR13RwSky2DVertexfff10iColor_tagf
// Start address: 0x1db1b0
void set_rect_vert(RwSky2DVertex& vert, f32 x, f32 y, f32 z, iColor_tag c, f32 rcz)
{
}

// find_format_tag__8xtextboxFRC6substrRi
// Start address: 0x1db2b0
tag_type* find_format_tag(substr& s, s32& index)
{
	s32 start;
	s32 end;
	tag_type& t;
	s32 c;
}

// register_tags__8xtextboxFPCQ28xtextbox8tag_typeUi
// Start address: 0x1db390
void register_tags(tag_type* t, u32 size)
{
	tag_type* s1;
	tag_type* s2;
	tag_type* end1;
	tag_type* end2;
	tag_type* d;
	s32 c;
}

// parse_tag_timer__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db5a0
void parse_tag_timer(jot& j, split_tag& ti)
{
	u32 id;
	xTimer* ta;
	type_60 buffer;
	u32 sec;
	u32 mn;
}

// parse_tag_pop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db750
void parse_tag_pop(split_tag& ti)
{
}

// parse_tag_insert_hash__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db790
void parse_tag_insert_hash(jot& j, split_tag& ti)
{
	xTextAsset* ta;
}

// parse_tag_insert__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db870
void parse_tag_insert(jot& j, split_tag& ti)
{
	u32 id;
	xTextAsset* ta;
}

// reset_tag_tex__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db950
void reset_tag_tex()
{
}

// parse_tag_tex__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dba00
void parse_tag_tex(jot& a, xtextbox& tb, split_tag& ti)
{
	tex_tag_context& ttc;
	callback cb;
}

// render_tag_tex__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x1dbe60
void render_tag_tex(jot& j, xtextbox& tb, f32 x, f32 y)
{
	tex_tag_context& ttc;
	basic_rect_1 dst;
}

// reset_tag_model__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dbf50
void reset_tag_model()
{
}

// parse_tag_model__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dbff0
void parse_tag_model(jot& a, xtextbox& tb, split_tag& ti)
{
	model_tag_context& mtc;
	callback cb;
}

// render_tag_model__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x1dc280
void render_tag_model(jot& j, xtextbox& tb, f32 x, f32 y)
{
	model_tag_context& mtc;
	basic_rect_1 dst;
	xVec3 from;
	xVec3 to;
	xMat4x3 frame;
	f32 scale;
}

// parse_tag_page_break__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc490
void parse_tag_page_break(jot& a)
{
}

// parse_tag_word_break__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4b0
void parse_tag_word_break(jot& a)
{
}

// parse_tag_tab__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4d0
void parse_tag_tab(jot& a)
{
}

// parse_tag_newline__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4f0
void parse_tag_newline(jot& a, xtextbox& tb)
{
}

// parse_tag_open_curly__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc600
void parse_tag_open_curly(jot& a, xtextbox& tb, split_tag& ti)
{
	s8 c;
}

// reset_tag_yjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc710
void reset_tag_yjustify(jot& a)
{
	callback cb;
}

// parse_tag_yjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc720
void parse_tag_yjustify(jot& a, split_tag& ti)
{
	u32& flags;
	callback cb;
}

// update_tag_reset_yjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dc8c0
void update_tag_reset_yjustify(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_yjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dc8e0
void update_tag_yjustify(jot& j, xtextbox& tb)
{
}

// reset_tag_xjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc900
void reset_tag_xjustify(jot& a)
{
	callback cb;
}

// parse_tag_xjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc910
void parse_tag_xjustify(jot& a, split_tag& ti)
{
	u32& flags;
	callback cb;
}

// update_tag_reset_xjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcab0
void update_tag_reset_xjustify(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_xjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcad0
void update_tag_xjustify(jot& j, xtextbox& tb)
{
}

// reset_tag_wrap__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcaf0
void reset_tag_wrap(jot& a)
{
	callback cb;
}

// parse_tag_wrap__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcb00
void parse_tag_wrap(jot& a, split_tag& ti)
{
	u32& flags;
	callback cb;
}

// update_tag_reset_wrap__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcc00
void update_tag_reset_wrap(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_wrap__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcc20
void update_tag_wrap(jot& j, xtextbox& tb)
{
}

// reset_tag_font__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcc40
void reset_tag_font(jot& a)
{
	callback cb;
}

// parse_tag_font__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcc50
void parse_tag_font(jot& a, split_tag& ti)
{
	u32& id;
	callback cb;
}

// update_tag_reset_font__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcce0
void update_tag_reset_font(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_font__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dccf0
void update_tag_font(jot& j, xtextbox& tb)
{
}

// reset_tag_color__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcd00
void reset_tag_color(jot& a)
{
	callback cb;
}

// parse_tag_color__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcd10
void parse_tag_color(jot& a, xtextbox& tb, split_tag& ti)
{
	iColor_tag& color;
	u32 v;
	u32 temp;
	callback cb;
}

// update_tag_reset_color__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcf50
void update_tag_reset_color(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_color__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcf80
void update_tag_color(jot& j, xtextbox& tb)
{
}

// reset_tag_all__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcfb0
void reset_tag_all(jot& j)
{
	callback cb;
}

// update_tag_reset_all__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcfc0
void update_tag_reset_all(xtextbox& tb, xtextbox& ctb)
{
}

// reset_tag_yspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd0a0
void reset_tag_yspace(jot& a)
{
	callback cb;
}

// parse_tag_yspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd0b0
void parse_tag_yspace(jot& a, xtextbox& tb, split_tag& ti)
{
	f32& v;
	callback cb;
}

// update_tag_reset_yspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd1f0
void update_tag_reset_yspace(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_yspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd200
void update_tag_yspace(jot& j, xtextbox& tb)
{
}

// reset_tag_xspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd210
void reset_tag_xspace(jot& a)
{
	callback cb;
}

// parse_tag_xspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd220
void parse_tag_xspace(jot& a, xtextbox& tb, split_tag& ti)
{
	f32& v;
	callback cb;
}

// update_tag_reset_xspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd360
void update_tag_reset_xspace(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_xspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd370
void update_tag_xspace(jot& j, xtextbox& tb)
{
}

// reset_tag_tab_stop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd380
void reset_tag_tab_stop(jot& a)
{
	callback cb;
}

// parse_tag_tab_stop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd390
void parse_tag_tab_stop(jot& a, xtextbox& tb, split_tag& ti)
{
	f32& v;
	callback cb;
}

// update_tag_reset_tab_stop__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd4c0
void update_tag_reset_tab_stop(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_tab_stop__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd4d0
void update_tag_tab_stop(jot& j, xtextbox& tb)
{
}

// reset_tag_right_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd4e0
void reset_tag_right_indent(jot& a)
{
	callback cb;
}

// parse_tag_right_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd4f0
void parse_tag_right_indent(jot& a, xtextbox& tb, split_tag& ti)
{
	f32& v;
	callback cb;
}

// update_tag_reset_right_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd630
void update_tag_reset_right_indent(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_right_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd640
void update_tag_right_indent(jot& j, xtextbox& tb)
{
}

// reset_tag_left_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd650
void reset_tag_left_indent(jot& a)
{
	callback cb;
}

// parse_tag_left_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd660
void parse_tag_left_indent(jot& a, xtextbox& tb, split_tag& ti)
{
	f32& v;
	callback cb;
}

// update_tag_reset_left_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd7a0
void update_tag_reset_left_indent(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_left_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd7b0
void update_tag_left_indent(jot& j, xtextbox& tb)
{
}

// reset_tag_height__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd7c0
void reset_tag_height(jot& a)
{
	callback cb;
}

// parse_tag_height__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd7d0
void parse_tag_height(jot& a, xtextbox& tb, split_tag& ti)
{
	f32& v;
	callback cb;
}

// update_tag_reset_height__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd900
void update_tag_reset_height(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_height__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd910
void update_tag_height(jot& j, xtextbox& tb)
{
}

// reset_tag_width__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd920
void reset_tag_width(jot& a)
{
	callback cb;
}

// parse_tag_width__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd930
void parse_tag_width(jot& a, xtextbox& tb, split_tag& ti)
{
	f32& v;
	callback cb;
}

// update_tag_reset_width__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dda60
void update_tag_reset_width(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_width__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dda70
void update_tag_width(jot& j, xtextbox& tb)
{
}

// reset_tag_blue__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dda80
void reset_tag_blue(jot& a)
{
	callback cb;
}

// parse_tag_blue__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dda90
void parse_tag_blue(jot& a, xtextbox& tb, split_tag& ti)
{
	f32& v;
	callback cb;
}

// update_tag_reset_blue__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1ddc30
void update_tag_reset_blue(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_blue__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1ddc40
void update_tag_blue(jot& j, xtextbox& tb)
{
}

// reset_tag_green__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddcb0
void reset_tag_green(jot& a)
{
	callback cb;
}

// parse_tag_green__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddcc0
void parse_tag_green(jot& a, xtextbox& tb, split_tag& ti)
{
	f32& v;
	callback cb;
}

// update_tag_reset_green__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dde60
void update_tag_reset_green(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_green__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dde70
void update_tag_green(jot& j, xtextbox& tb)
{
}

// reset_tag_red__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddee0
void reset_tag_red(jot& a)
{
	callback cb;
}

// parse_tag_red__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddef0
void parse_tag_red(jot& a, xtextbox& tb, split_tag& ti)
{
	f32& v;
	callback cb;
}

// update_tag_reset_red__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de090
void update_tag_reset_red(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_red__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de0a0
void update_tag_red(jot& j, xtextbox& tb)
{
}

// reset_tag_alpha__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1de110
void reset_tag_alpha(jot& a)
{
	callback cb;
}

// parse_tag_alpha__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1de120
void parse_tag_alpha(jot& a, xtextbox& tb, split_tag& ti)
{
	f32& v;
	callback cb;
}

// update_tag_reset_alpha__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de2c0
void update_tag_reset_alpha(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_alpha__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de2d0
void update_tag_alpha(jot& j, xtextbox& tb)
{
}

// changed__Q28xtextbox6layoutFRC8xtextbox
// Start address: 0x1de340
u8 changed(layout* this, xtextbox& ctb)
{
	u32 flags1;
	u32 flags2;
	s32 i;
	jot& j;
	u32 oldval;
	u32 val;
}

// yextent__Q28xtextbox6layoutCFfRiii
// Start address: 0x1de550
f32 yextent(layout* this, f32 max, s32& size, s32 begin_jot, s32 end_jot)
{
	s32 begin_line;
	f32 top;
	s32 i;
	jot_line& line;
	jot_line& line;
}

// render__Q28xtextbox6layoutFRC8xtextboxii
// Start address: 0x1de690
void render(layout* this, xtextbox& ctb, s32 begin_jot, s32 end_jot)
{
	s32 begin_line;
	s32 i;
	jot& j;
	f32 top;
	u32 li;
	s32 line_last;
	f32 x;
	f32 y;
	s32 i;
	jot_line& line;
	u32 xj;
	jot& j;
}

// calc__Q28xtextbox6layoutFRC8xtextboxUi
// Start address: 0x1deba0
void calc(layout* this, xtextbox& ctb, u32 start_text)
{
	jot_line& first_line;
	type_36 text_stack;
	u32 text_stack_size;
	u32 text_index;
	s8* s;
	s8* end;
	jot& a;
	jot_line& line;
	jot_line& last_line;
	u32 i;
}

// fit_line__Q28xtextbox6layoutFv
// Start address: 0x1df1b0
u8 fit_line(layout* this)
{
	jot_line& line;
	s32 i;
}

// bound_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df330
void bound_line(layout* this, jot_line& line)
{
	u32 i;
	jot& a;
	u32 i;
	jot& a;
	f32 total_height;
}

// merge_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df460
void merge_line(layout* this, jot_line& line)
{
	u32 d;
	u32 i;
	jot& a1;
	jot& a2;
}

// trim_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df730
void trim_line(layout* this, jot_line& line)
{
	s32 i;
	jot& a;
	u32 i;
	jot& a;
}

// clear__Q28xtextbox6layoutFv
// Start address: 0x1df9b0
void clear(layout* this)
{
}

// refresh_end__Q28xtextbox6layoutFRC8xtextbox
// Start address: 0x1dfcd0
void refresh_end(layout* this, xtextbox& tb)
{
}

// refresh__Q28xtextbox6layoutFRC8xtextboxb
// Start address: 0x1dfdd0
void refresh(layout* this, xtextbox& tb, u8 force)
{
}

// clear_layout_cache__8xtextboxFv
// Start address: 0x1dff00
void clear_layout_cache()
{
	u32 index;
}

// read_list__8xtextboxFRCQ28xtextbox9tag_entryPiUi
// Start address: 0x1dff60
u32 read_list(tag_entry& e, s32* v, u32 vsize)
{
	u32 total;
	u32 i;
}

// read_list__8xtextboxFRCQ28xtextbox9tag_entryPfUi
// Start address: 0x1e0000
u32 read_list(tag_entry& e, f32* v, u32 vsize)
{
	u32 total;
	u32 i;
}

// find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
// Start address: 0x1e00a0
tag_entry* find_entry(tag_entry_list& el, substr& name)
{
	u32 i;
	tag_entry& e;
}

// read_tag__8xtextboxFRC6substr
// Start address: 0x1e0140
tag_entry_list read_tag(substr& s)
{
	u32 entries_used;
	substr it;
	substr delims;
	substr sub_delims;
	tag_entry& entry;
	s8* d;
	substr& arg;
	s8* d;
	tag_entry_list ret;
	type_22 arg_buffer;
	type_25 entry_buffer;
}

// yextent__8xtextboxCFfRiRCQ28xtextbox6layoutii
// Start address: 0x1e05e0
f32 yextent(f32 max, s32& size, layout& l, s32 begin_jot, s32 end_jot)
{
}

// render__8xtextboxCFRQ28xtextbox6layoutii
// Start address: 0x1e05f0
void render(xtextbox* this, layout& l, s32 begin_jot, s32 end_jot)
{
}

// temp_layout__8xtextboxCFb
// Start address: 0x1e0600
layout& temp_layout(xtextbox* this, u8 cache)
{
	s32 cur_time;
	u8 refresh;
	u32 index;
	s32 min_used;
	u32 i;
	s32 used;
	tl_cache_entry& e;
}

// set_text__8xtextboxFPPCcPCUiUi
// Start address: 0x1e0960
void set_text(xtextbox* this, s8** texts, u32* text_sizes, u32 size)
{
	u32 i;
	u32 i;
}

// set_text__8xtextboxFPPCcUi
// Start address: 0x1e0a70
void set_text(xtextbox* this, s8** texts, u32 size)
{
}

// set_text__8xtextboxFPCc
// Start address: 0x1e0a80
void set_text(xtextbox* this, s8* text)
{
}

// text_render__8xtextboxFRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x1e0ad0
void text_render(jot& j, xtextbox& tb, f32 x, f32 y)
{
}

// start_layout__19@unnamed@xFont_cpp@FRC8xtextbox
// Start address: 0x1e0af0
void start_layout()
{
}

// load_model_args__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@10model_argsRC6substr
// Start address: 0x1e0c10
void load_model_args(model_args& ma, substr& s)
{
	tag_entry_list el;
	tag_entry* e;
	substr& name;
	u32 id;
}

// load_tex_args__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@8tex_argsRC6substr
// Start address: 0x1e1180
void load_tex_args(tex_args& ta, substr& s)
{
	tag_entry_list el;
	tag_entry* e;
	substr& name;
	u32 id;
	RwTexture* texture;
}

// parse_next_text_jot__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUi
// Start address: 0x1e1b20
s8* parse_next_text_jot(jot& a, xtextbox& tb, s8* text)
{
	s8 c;
}

// parse_next_tag_jot__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUi
// Start address: 0x1e1d40
s8* parse_next_tag_jot(jot& a, xtextbox& tb, xtextbox& ctb, s8* text, u32 text_size)
{
	split_tag ti;
	u32 size;
}

// parse_split_tag__19@unnamed@xFont_cpp@FRQ28xtextbox9split_tag
// Start address: 0x1e1f50
u32 parse_split_tag(split_tag& ti)
{
	substr s;
}

// irender__5xfontCFPCcUiff
// Start address: 0x1e2340
void irender(xfont* this, s8* text, u32 text_size, f32 x, f32 y)
{
	font_data& fd;
	basic_rect_1 bounds;
	u32 i;
	u32 charIndex;
}

// irender__5xfontCFPCcff
// Start address: 0x1e2600
void irender(xfont* this, s8* text, f32 x, f32 y)
{
}

// stop_render__5xfontCFv
// Start address: 0x1e2610
void stop_render()
{
}

// start_render__5xfontCFv
// Start address: 0x1e26e0
void start_render(xfont* this)
{
}

// bounds__5xfontCFPCcUifRUi
// Start address: 0x1e2750
basic_rect_1 bounds(xfont* this, s8* text, u32 text_size, f32 max_width, u32& size)
{
	font_data& fd;
	basic_rect_1 r;
	s8* s;
	u32 i;
	u32 charIndex;
	f32 dx;
}

// bounds__5xfontCFPCc
// Start address: 0x1e28c0
basic_rect_1 bounds(xfont* this, s8* text)
{
	u32 size;
}

// restore_render_state__5xfontFv
// Start address: 0x1e28f0
void restore_render_state()
{
}

// set_render_state__5xfontFP8RwRaster
// Start address: 0x1e29a0
void set_render_state(RwRaster* raster)
{
}

// init__5xfontFv
// Start address: 0x1e2ac0
void init()
{
	u32 i;
	font_data& fd;
}

// load_model__19@unnamed@xFont_cpp@FUi
// Start address: 0x1e2b90
xModelInstance* load_model(u32 id)
{
	u32 oldest;
	u32 i;
	RpAtomic* mf;
	model_cache_entry& e;
	xModelInstance& model;
	u32 next_order;
}

// init_model_cache__19@unnamed@xFont_cpp@Fv
// Start address: 0x1e2cd0
void init_model_cache()
{
	void* data;
	model_pool& pool;
	xModelInstance& model;
	model_cache_entry& e;
}

// tex_render__19@unnamed@xFont_cpp@FRC13basic_rect<f>RC13basic_rect<f>RC13basic_rect<f>10iColor_tag
// Start address: 0x1e2e90
void tex_render(basic_rect_1& src, basic_rect_1& dst, basic_rect_1& clip, iColor_tag color)
{
	basic_rect_1 r;
	basic_rect_1 rt;
	RwSky2DVertex* vert;
}

// init_font_data__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@9font_data
// Start address: 0x1e35a0
u8 init_font_data(font_data& fd)
{
	font_asset& a;
	s32 height;
	u8 i;
	u8 c;
	u32 tail_index;
}

// reset_font_spacing__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@10font_asset
// Start address: 0x1e3ce0
u8 reset_font_spacing(font_asset& a)
{
	RwTexture* tex;
	basic_rect_0 char_bounds;
	type_32 baseline_count;
	s32 width;
	RwImage* image;
	iColor_tag* bits;
	s32 i;
	basic_rect_0 r;
	s32 baseline;
}

// find_bounds__19@unnamed@xFont_cpp@FPC10iColor_tagRC13basic_rect<i>i
// Start address: 0x1e3fb0
basic_rect_0 find_bounds(iColor_tag* bits, basic_rect_0& r, s32 pitch)
{
	s32 diff;
	iColor_tag* endp;
	iColor_tag* p;
	s32 pmode;
	s32 minx;
	s32 maxx;
	s32 miny;
	s32 maxy;
	s32 y;
	iColor_tag* endline;
	s32 x;
	basic_rect_0 b;
}

